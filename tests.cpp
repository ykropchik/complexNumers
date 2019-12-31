//
// Created by ykrop on 14.12.2019.
//

#include "gtest/gtest.h"
#include "lib.h"

using namespace std;

TEST(summComplex, expectedResult){
    ComplexNumber firstComplex = {6, 6};
    ComplexNumber secondComplex = {6, 10};

    ComplexNumber result = firstComplex + secondComplex;
    ComplexNumber expectedResult = {12, 16};
    EXPECT_EQ(result.a, expectedResult.a);
    EXPECT_EQ(result.b, expectedResult.b);
}

TEST(subComplex, expectedResult){
    ComplexNumber firstComplex = {10, 19};
    ComplexNumber secondComplex = {6, 10};

    ComplexNumber result = firstComplex - secondComplex;
    ComplexNumber expectedResult = {4, 9};
    EXPECT_EQ(result.a, expectedResult.a);
    EXPECT_EQ(result.b, expectedResult.b);
}

TEST(divComplex, expectedResult){
    ComplexNumber firstComplex = {32, 11};
    ComplexNumber secondComplex = {4, 3};

    ComplexNumber result = firstComplex / secondComplex;
    ComplexNumber expectedResult = {6.44, -2.08};
    EXPECT_EQ(result.a, expectedResult.a);
    EXPECT_EQ(result.b, expectedResult.b);
}

TEST(mulComplex, expectedResult){
    ComplexNumber firstComplex = {4, 12};
    ComplexNumber secondComplex = {11, 4};

    ComplexNumber result = firstComplex * secondComplex;
    ComplexNumber expectedResult = {-4, 148};
    EXPECT_EQ(result.a, expectedResult.a);
    EXPECT_EQ(result.b, expectedResult.b);
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
