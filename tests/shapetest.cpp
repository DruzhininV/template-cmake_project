//
// Created by Vladimir Druzhinin on 26.01.2019.
//
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "shape.h"

TEST(ShapeTest, SphereTest){
    using namespace std::string_literals;
    auto shape = lib::make_sphere();
    ASSERT_EQ(shape->print(), "Sphere"s);
}
//int main(int argc, char** argv) {
//    ::testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
//}
