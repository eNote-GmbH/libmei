# -- coding: utf-8 --
import logging
import re
import textwrap
from pathlib import Path

lg = logging.getLogger('schemaparser')

LANG_NAME = "C++"

NS_PREFIX_MAP = {
    "http://www.w3.org/XML/1998/namespace": "xml",
    "http://www.w3.org/1999/xlink": "xlink",
    "http://www.isocat.org/ns/dcr": "datcat"
}

AUTHORS = "Andrew Hankinson, Alastair Porter, and Others"

METHODS_HEADER_TEMPLATE = """{documentation}
        MeiAttribute* get{attNameUpper}();
        void set{attNameUpper}(std::string _{attNameLowerJoined});
        bool has{attNameUpper}();
        void remove{attNameUpper}();
"""

METHODS_IMPL_TEMPLATE = """MeiAttribute* mei::{className}::get{attNameUpper}() {{
    if (!{accessor}hasAttribute("{attNameLower}")) {{
        return NULL;
    }}
    return {accessor}getAttribute("{attNameLower}");
}};

void mei::{className}::set{attNameUpper}(std::string _{attNameLowerJoined}) {{
    MeiAttribute *a = new MeiAttribute("{attNameLower}", _{attNameLowerJoined});
    {accessor}addAttribute(a);
}};

bool mei::{className}::has{attNameUpper}() {{
    return {accessor}hasAttribute("{attNameLower}");
}};

void mei::{className}::remove{attNameUpper}() {{
    {accessor}removeAttribute("{attNameLower}");
}};
"""

CLASSES_IMPL_TEMPLATE = """#include "{moduleNameLower}.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

{elements}

"""
CLASSES_HEAD_TEMPLATE = """{license}

#ifndef {moduleNameCaps}_H_
#define {moduleNameCaps}_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

{includes}

namespace mei {{
{elements}
}} // namespace mei
#endif // {moduleNameCaps}_H_
"""

ELEMENT_CLASS_HEAD_TEMPLATE = """
{documentation}
class MEI_EXPORT {elementNameUpper} : public MeiElement {{
    public:
        {elementNameUpper}();
        {elementNameUpper}(const {elementNameUpper} &other);
        virtual ~{elementNameUpper}();
{methods}
/* include <{elementName}> */

{mixIns}
    private:
        REGISTER_DECLARATION({elementNameUpper});
}};
"""

ELEMENT_CLASS_IMPL_CONS_TEMPLATE = """mei::{elementNameUpper}::{elementNameUpper}() :{mixIns}
{{
}}
REGISTER_DEFINITION(mei::{elementNameUpper}, \"{elementNameLower}\");
mei::{elementNameUpper}::~{elementNameUpper}() {{}}
mei::{elementNameUpper}::{elementNameUpper}(const {elementNameUpper} &other) :
    MeiElement(other){onlyMixIns}
{{
}}

{methods}/* include <{elementNameLower}> */

"""

MIXIN_CLASS_HEAD_TEMPLATE = """class {attGroupNameUpper}MixIn {{
    public:
        explicit {attGroupNameUpper}MixIn(MeiElement *b);
        virtual ~{attGroupNameUpper}MixIn();
{methods}
/* include <{mixinNameLower}> */

    private:
        MeiElement *b;
}};

"""

MIXIN_CLASS_IMPL_CONS_TEMPLATE = """mei::{attGroupNameUpper}MixIn::{attGroupNameUpper}MixIn(MeiElement *b) {{
    this->b = b;
}};

mei::{attGroupNameUpper}MixIn::~{attGroupNameUpper}MixIn() {{}}
{methods}
/* include <{mixinNameLower}> */
"""

ELEMENT_MIXIN_TEMPLATE = """        {attNameUpper}MixIn    m_{attNameUpper};
"""

LICENSE = """/*
    Copyright (c) 2011-2015 {authors}

    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/"""


def create(schema, outdir):
    lg.debug("Begin C++ Output ... ")
    __create_mixin_classes(schema, outdir)
    __create_element_classes(schema, outdir)

    lg.debug("Success!")


def __get_docstr(text, indent=0):
    """ 
        Format a docstring. Take the first sentence (. followed by a space)
        and use it for the brief. Then put the rest of the text after a blank
        line if there is text there.
    """
    text = text.strip()

    dotpos = text.find(". ")
    if dotpos > 0:
        brief = text[:dotpos+1]
        content = text[dotpos+2:]
    else:
        brief = text
        content = ""
    if indent == 0:
        istr = ""
    else:
        istr = "{0:{1}}".format(" ", indent)

    brief = "\n{0} *  ".format(istr).join(textwrap.wrap(brief, 80))
    content = "\n{0} *  ".format(istr).join(textwrap.wrap(content, 80))
    docstr = "{0}/** \\brief {1}".format(istr, brief)
    if len(content) > 0:
        docstr += "\n{0} * \n{0} *  {1}".format(istr, content)
    docstr += "\n{0} */".format(istr)
    return docstr


def __create_mixin_classes(schema, outdir):
    ###########################################################################
    # Header
    ###########################################################################
    lg.debug("Creating Mixin Headers.")
    for module, atgroup in sorted(schema.attribute_group_structure.items()):
        fullout = ""
        classes = ""
        methods = ""

        if not atgroup:
            # continue if we don't have any attribute groups in this module
            continue

        for gp, atts in sorted(atgroup.items()):
            if not atts:
                continue

            methods = ""
            for att in atts:
                if len(att.split("|")) > 1:
                    ns, att = att.split("|")
                docstr = __get_docstr(schema.get_att_desc(att), indent=8)
                substrings = {
                    "attNameUpper": schema.cc(schema.strpatt(att)),
                    "attNameLower": att,
                    "attNameLowerJoined": schema.strpdot(att),
                    "documentation": docstr
                }
                methods += METHODS_HEADER_TEMPLATE.format(**substrings)

            clsubstr = {
                "attGroupNameUpper": schema.cc(schema.strpatt(gp)),
                "methods": methods,
                "mixinNameLower": "{0}mixin".format(att)
            }
            classes += MIXIN_CLASS_HEAD_TEMPLATE.format(**clsubstr)

        tplvars = {
            "includes": "",
            'license': LICENSE.format(authors=AUTHORS),
            'moduleNameCaps': "{0}MIXIN".format((module.upper()).replace("-", "_")),
            'elements': classes.strip()
        }
        if "std::string" in classes:
            tplvars["includes"] = "#include <string>"
        fullout = CLASSES_HEAD_TEMPLATE.format(**tplvars)
        fmh = Path(outdir, f"{module.lower()}mixins.h")
        fmh.write_text(fullout)
        lg.debug("\tCreated {0}mixins.h".format(module.lower()))

    lg.debug("Creating Mixin Implementations")
    ###########################################################################
    # Implementation
    ###########################################################################
    for module, atgroup in sorted(schema.attribute_group_structure.items()):
        fullout = ""
        classes = ""
        methods = ""

        if not atgroup:
            continue

        for gp, atts in sorted(atgroup.items()):
            if not atts:
                continue
            methods = ""
            prefix = ""
            for att in atts:
                if len(att.split("|")) > 1:
                    # we have a namespaced attribute
                    ns, att = att.split("|")
                    prefix = NS_PREFIX_MAP[ns]
                    # nssubstr = {
                    #     "prefix": NS_PREFIX_MAP[ns],
                    #     "href": ns
                    # }
                    # nsDef = NAMESPACE_TEMPLATE.format(**nssubstr)
                    attrNs = "s, "
                else:
                    attrNs = ""

                attsubstr = {
                    "className": "{0}MixIn".format(schema.cc(schema.strpatt(gp))),
                    "attNameUpper": schema.cc(att),
                    "attNameLower": "{0}:{1}".format(prefix, att) if prefix != "" else "{0}".format(att),
                    "attNameLowerJoined": schema.strpdot(att),
                    # "namespaceDefinition": nsDef,
                    "attrNs": attrNs,
                    "accessor": "b->",  # we need this for mixins
                }
                methods += METHODS_IMPL_TEMPLATE.format(**attsubstr)

            clsubstr = {
                "attGroupNameUpper": schema.cc(schema.strpatt(gp)),
                "methods": methods,
                "mixinNameLower": "{0}mixin".format(att)
            }
            classes += MIXIN_CLASS_IMPL_CONS_TEMPLATE.format(**clsubstr)

        tplvars = {
            "moduleNameLower": f"{module.lower()}mixins",
            "elements": classes
        }
        fullout = CLASSES_IMPL_TEMPLATE.format(**tplvars)
        fmi = Path(outdir, f"{module.lower()}mixins.cpp")
        fmi.write_text(fullout)
        lg.debug(f"\tCreated {module.lower()}mixins.cpp")


def __create_element_classes(schema, outdir):
    lg.debug("Creating Element Headers")
    ###########################################################################
    # Header
    ###########################################################################
    for module, elements in sorted(schema.element_structure.items()):
        mixins = ""
        element_output = ""

        if not elements:
            continue
        includes = []
        for element, atgroups in sorted(elements.items()):
            element_mixins = ""
            attribute_methods = ""
            for attribute in atgroups:
                if isinstance(attribute, list):
                    # it's our self-defined attributes.
                    for sda in attribute:
                        if len(sda.split("|")) > 1:
                            ns, sda = sda.split("|")

                        docstr = __get_docstr(
                            schema.get_att_desc(sda), indent=8)
                        methstr = {
                            "attNameUpper": schema.cc(schema.strpatt(sda)),
                            "attNameLower": sda,
                            "attNameLowerJoined": schema.strpdot(sda),
                            "documentation": docstr
                        }
                        attribute_methods += METHODS_HEADER_TEMPLATE.format(
                            **methstr)

                else:
                    element_mixins += ELEMENT_MIXIN_TEMPLATE.format(
                        attNameUpper=schema.cc(schema.strpatt(attribute)))

                    # figure out includes
                    if attribute in list(schema.inverse_attribute_group_structure.keys()):
                        mod = schema.inverse_attribute_group_structure[attribute]
                        if mod not in includes:
                            includes.append(mod)
            docstr = __get_docstr(schema.get_elem_desc(element), indent=0)
            elvars = {
                "elementNameUpper": schema.cc(element),
                "methods": attribute_methods,
                "mixIns": element_mixins,
                "documentation": docstr.strip(),
                "elementName": element
            }

            element_output += ELEMENT_CLASS_HEAD_TEMPLATE.format(**elvars)

        incl_output = ""
        incl_output += "#include \"meicommon.h\"\n"
        for incl in sorted(includes):
            incl_output += "#include \"{0}mixins.h\"\n".format(incl.lower())

        outvars = {
            "includes": incl_output,
            "license": LICENSE.format(authors=AUTHORS),
            "moduleNameCaps": (module.upper()).replace("-", "_"),
            "elements": element_output.strip()
        }
        if "std::string" in element_output:
            outvars["includes"] += "#include <string>\n"

        fullout = CLASSES_HEAD_TEMPLATE.format(**outvars)
        fmh = Path(outdir, f"{module.lower()}.h")
        fmh.write_text(fullout)
        lg.debug(f"\tCreated {module.lower()}.h")

    # ###########################################################################
    # # Implementation
    # ###########################################################################
    lg.debug("Creating Element Implementations")
    for module, elements in sorted(schema.element_structure.items()):
        mixins = ""
        element_output = ""
        element_constructor = ""

        if not elements:
            continue

        for element, atgroups in sorted(elements.items()):
            attribute_methods = ""
            element_mixins = "\n    MeiElement(\"{0}\"),\n".format(element)
            element_onlymixins = ""
            for attribute in atgroups:
                if isinstance(attribute, list):
                    for sda in attribute:
                        if len(sda.split("|")) > 1:
                            # we have a namespaced attribute
                            ns, sda = sda.split("|")
                            # nssubstr = {
                            #     "prefix": NS_PREFIX_MAP[ns],
                            #     "href": ns
                            # }
                            # nsDef = NAMESPACE_TEMPLATE.format(**nssubstr)
                            attrNs = "s, "
                        else:
                            nsDef = ""
                            attrNs = ""

                        methstr = {
                            "className": schema.cc(element),
                            "attNameUpper": schema.cc(schema.strpatt(sda)),
                            "attNameLower": sda,
                            "attNameLowerJoined": schema.strpdot(sda),
                            # "namespaceDefinition": nsDef,
                            "attrNs": attrNs,
                            # we need this for mixins, but not for elements.
                            "accessor": "",
                        }
                        attribute_methods += METHODS_IMPL_TEMPLATE.format(
                            **methstr)
                else:
                    element_mixins += "    m_{0}(this),\n".format(
                        schema.cc(schema.strpatt(attribute)))
                    element_onlymixins += ",\n    m_{0}(this)".format(
                        schema.cc(schema.strpatt(attribute)))
            element_mixins = element_mixins.rstrip(",\n")

            consvars = {
                'elementNameUpper': schema.cc(element),
                'elementNameLower': element,
                'mixIns': element_mixins,
                'onlyMixIns': element_onlymixins,
                'methods': attribute_methods
            }
            element_constructor += ELEMENT_CLASS_IMPL_CONS_TEMPLATE.format(
                **consvars)

        implvars = {
            'moduleNameLower': module.lower(),
            'elements': element_constructor
        }
        fullout = CLASSES_IMPL_TEMPLATE.format(**implvars)

        fmi = Path(outdir, f"{module.lower()}.cpp")
        fmi.write_text(fullout)
        lg.debug(f"\t Created {module.lower()}.cpp")


def parse_includes(file_dir, includes_dir: str):
    """Parse includes."""
    lg.debug("Parsing includes")
    # get the files in the includes directory
    includes = [f for f in Path(includes_dir).iterdir()
                if not f.name.startswith(".")]

    for f in Path(file_dir).iterdir():
        if f.name.startswith("."):
            continue
        methods, inc = __process_include(f, includes, includes_dir)
        if methods:
            __parse_codefile(methods, inc, f.parent, f)


def __process_include(fname, includes, includes_dir: str):
    new_methods, includes_block = None, None
    if "{0}.inc".format(fname) in includes:
        lg.debug("\tProcessing include for {0}".format(fname))
        includefile = Path(includes_dir, fname).with_suffix(".inc").read_text()
        new_methods, includes_block = __parse_includefile(includefile)
        return (new_methods, includes_block)
    else:
        return (None, None)


def __parse_includefile(contents):
    # parse the include file for our methods.
    ret = {}
    inc = []
    reg = re.compile(
        r"/\* <(?P<elementName>[^>]+)> \*/(.+?)/\* </(?P=elementName)> \*/", re.MULTILINE | re.DOTALL)
    ret = dict(re.findall(reg, contents))

    # grab the include for the includes...
    reginc = re.compile(
        r"/\* #include_block \*/(.+?)/\* #include_block \*/", re.MULTILINE | re.DOTALL)
    inc = re.findall(reginc, contents)
    return (ret, inc)


def __parse_codefile(methods, includes, directory, codefile):
    f = Path(directory, codefile)
    contents = f.read_text()
    regmatch = re.compile(r"/\* include <(?P<elementName>[^>]+)> \*/")
    incmatch = re.compile(r"/\* #include_block \*/")
    for i, line in enumerate(contents):
        imatch = re.match(incmatch, line)
        if imatch:
            if includes:
                contents[i] = includes[0]

        match = re.match(regmatch, line)
        if match:
            if match.group("elementName") in methods.keys():
                contents[i] = methods[match.group("elementName")].lstrip("\n")

    f.write_text(contents)
