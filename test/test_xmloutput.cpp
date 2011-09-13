//
//  File.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-21.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <iostream>
#include <gtest/gtest.h>
#include <mei/xmlimport.h>
#include <mei/xmlexport.h>
#include <mei/meidocument.h>
#include <mei/meielement.h>

#include <string>

using std::string;
using mei::MeiDocument;
using mei::MeiElement;
using mei::XmlExport;

TEST(TextXmlMeiExport, TestBasicExport) {
    MeiDocument *docf = mei::XmlImport::documentFromFile("beethoven.mei");
    XmlExport::meiDocumentToFile(docf, "filename.mei");
}

TEST(TextXmlMeiExport, TextExportWithComments) {
    MeiDocument *docf = mei::XmlImport::documentFromFile("campion.mei");
    XmlExport::meiDocumentToFile(docf, "campion-out.mei");
}

// Test that we can turn a document into a valid string
TEST(TestXmlMeiExport, ExportToString) {
    MeiDocument *d = new MeiDocument();
    MeiElement *root = mei::MeiFactory::createInstance("mei", "myid");
    d->setRootElement(root);

    string expected = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" xml:id=\"myid\" meiversion=\"2011-05\"/>\n";
    string ret = XmlExport::meiDocumentToText(d);
    ASSERT_EQ(expected, ret);
}

// Test that we export values and tails properly
TEST(TestXmlMeiExport, ExportValueAndTail) {
    MeiDocument *d = new MeiDocument();
    MeiElement *root = mei::MeiFactory::createInstance("mei", "myid");
    d->setRootElement(root);
    MeiElement *note = mei::MeiFactory::createInstance("note", "noteid");
    note->setValue("value");
    note->setTail("tail");
    root->addChild(note);

    string expected = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" xml:id=\"myid\" meiversion=\"2011-05\"><note xml:id=\"noteid\">value</note>tail</mei>\n";
    string ret = XmlExport::meiDocumentToText(d);
    ASSERT_EQ(expected, ret);
}

// Test that comments are created correctly
TEST(TestXmlMeiExport, ExportComment) {
    MeiDocument *d = new MeiDocument();
    MeiElement *root = mei::MeiFactory::createInstance("mei", "myid");
    d->setRootElement(root);
    MeiElement *comment = new mei::MeiElement("_comment");
    comment->setValue("comment");
    comment->setTail("t");
    root->addChild(comment);

    string expected = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" xml:id=\"myid\" meiversion=\"2011-05\"><!--comment-->t</mei>\n";
    string ret = XmlExport::meiDocumentToText(d);
    ASSERT_EQ(expected, ret);
}
