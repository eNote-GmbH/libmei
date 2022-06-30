/*
 libmei
 Copyright (c) 2011 Alastair Porter, Andrew Hankinson
 */

#include <stdlib.h>
#include <stdio.h>
#include <exception>
#include <stdexcept>
#include <gtest/gtest.h>

#ifdef WIN32
#include <mei.h>
#include <meiattribute.h>
#include <exceptions.h>
#include <shared.h>
#include <xmlexport.h>
#else
#include <mei/mei.h>
#include <mei/meiattribute.h>
#include <mei/exceptions.h>
#include <mei/shared.h>
#include <mei/xmlexport.h>
#endif

using std::vector;
using std::string;

using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiAttribute;
using mei::Mei;
using mei::Note;


TEST(TestMeiAttribute, TestNameValueConstructor) {
    MeiAttribute *a = new MeiAttribute("pname", "c");
    ASSERT_EQ("pname", a->getName());
    ASSERT_EQ("c", a->getValue());
}

TEST(TestMeiAttribute, TestNameValueCopyConstructor) {
    MeiAttribute *a = new MeiAttribute("pname", "c");
    MeiAttribute *b = new MeiAttribute(*a);
    b->setValue("d");
    
    ASSERT_EQ(b->getName(), a->getName());
    ASSERT_NE(b->getValue(), a->getValue());
}
