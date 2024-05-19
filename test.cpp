#include <gtest/gtest.h>
#include <iostream>
#include "ConceptualExample.cpp"

using namespace AbstractClassVsInterface;

TEST(ConceptualExampleTest, ConcreteClassMethodSecondTest) {
    ConcreteClass obj{ 1.5, 2.5 };
    testing::internal::CaptureStdout();
    obj.method_second();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "1.5, 2.5\n");
}


TEST(ConceptualExampleTest, AnotherConcreteClassMethodSecondTest) {
    AnotherConcreteClass obj{ 3.5 };
    testing::internal::CaptureStdout();
    obj.method_second();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "3.5\n");
}

TEST(ConceptualExampleTest, GetInterfaceTest) {
    Interface* ptr = getInterface();
    EXPECT_NE(ptr, nullptr);
    testing::internal::CaptureStdout();
    ptr->method_first();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "1\n");
    delete ptr;
}

