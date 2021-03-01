#include "gtest/gtest.h"

#include "add.cpp"
#include "sub.cpp"
#include "div.cpp"


#include "factory.hpp"


TEST(ParseTest, addTwoPositives) {
	char* test_val[4];
	test_val[0] = "./calculator";
	test_val[1] = "1";
	test_val[2] = "+";
	test_val[3] = "3";
	AbstractFactory test;
	Base* root = test.parse(test_val, 4);
	EXPECT_EQ(root->stringify(),"(1.000000+3.000000)");
	EXPECT_EQ(root->evaluate(), 4);
}
TEST(ParseTest, subTwoPositives) {
        char* test_val[4];
        test_val[0] = "./calculator";
        test_val[1] = "1";
        test_val[2] = "-";
        test_val[3] = "3";
        AbstractFactory test;
        Base* root = test.parse(test_val, 4);
        EXPECT_EQ(root->stringify(),"(1.000000-3.000000)");
        EXPECT_EQ(root->evaluate(), -2);
}

TEST(ParseTest, multTwoPositives) {
        char* test_val[4];
        test_val[0] = "./calculator";
        test_val[1] = "1";
        test_val[2] = "\*";
        test_val[3] = "3";
        AbstractFactory test;
        Base* root = test.parse(test_val, 4);
        EXPECT_EQ(root->stringify(),"(1.000000*3.000000)");
        EXPECT_EQ(root->evaluate(), 3);
}

TEST(ParseTest, divTwoPositives) {
        char* test_val[4];
        test_val[0] = "./calculator";
        test_val[1] = "1";
        test_val[2] = "/";
        test_val[3] = "4";
        AbstractFactory test;
        Base* root = test.parse(test_val, 4);
        EXPECT_EQ(root->stringify(),"(1.000000/4.000000)");
        EXPECT_EQ(root->evaluate(), 0.25);
}

TEST(ParseTest, powTwoPositives) {
        char* test_val[4];
        test_val[0] = "./calculator";
        test_val[1] = "2";
        test_val[2] = "\*\*";
        test_val[3] = "3";
        AbstractFactory test;
        Base* root = test.parse(test_val, 4);
        EXPECT_EQ(root->stringify(),"(2.000000**3.000000)");
        EXPECT_EQ(root->evaluate(), 8);
}

TEST(ParseTest, addSubThreePositives) {
        char* test_val[6];
        test_val[0] = "./calculator";
        test_val[1] = "1";
        test_val[2] = "+";
        test_val[3] = "3";
	test_val[4] = "-";
	test_val[5] = "6";
        AbstractFactory test;
        Base* root = test.parse(test_val, 6);
        EXPECT_EQ(root->stringify(),"((1.000000+3.000000)-6.000000)");
        EXPECT_EQ(root->evaluate(), -2);
}

TEST(ParseTest, multDivThreePositives) {
        char* test_val[6];
        test_val[0] = "./calculator";
        test_val[1] = "4";
        test_val[2] = "\*";
        test_val[3] = "3";
	test_val[4] = "/";
	test_val[5] = "2";
        AbstractFactory test;
        Base* root = test.parse(test_val, 6);
        EXPECT_EQ(root->stringify(),"((4.000000*3.000000)/2.000000)");
        EXPECT_EQ(root->evaluate(), 6);
}

TEST(ParseTest, multPowThreePositives) {
        char* test_val[6];
        test_val[0] = "./calculator";
        test_val[1] = "4";
        test_val[2] = "\*";
        test_val[3] = "3";
        test_val[4] = "\*\*";
        test_val[5] = "2";
        AbstractFactory test;
        Base* root = test.parse(test_val, 6);
        EXPECT_EQ(root->stringify(),"((4.000000*3.000000)**2.000000)");
        EXPECT_EQ(root->evaluate(), 144);
}

TEST(ParseTest, OneOfEach) {
        char* test_val[6];
        test_val[0] = "./calculator";
        test_val[1] = "4";
        test_val[2] = "+";
        test_val[3] = "3";
        test_val[4] = "-";
        test_val[5] = "2";
	test_val[6] = "\*";
	test_val[7] = "4";
	test_val[8] = "/";
	test_val[9] = "2";
	test_val[10] = "\*\*";
	test_val[11] = "2";
        AbstractFactory test;
        Base* root = test.parse(test_val, 12);
        EXPECT_EQ(root->stringify(),"(((((4.000000+3.000000)-2.000000)*4.000000)/2.000000)**2.000000)");
        EXPECT_EQ(root->evaluate(), 100);
}

TEST(ParseTest, addTwoNegatives) {
        char* test_val[4];
        test_val[0] = "./calculator";
        test_val[1] = "-1";
        test_val[2] = "+";
        test_val[3] = "-3";
        AbstractFactory test;
        Base* root = test.parse(test_val, 4);
        EXPECT_EQ(root->stringify(),"(-1.000000+-3.000000)");
        EXPECT_EQ(root->evaluate(), -4);
}
TEST(ParseTest, subTwoNegatives) {
        char* test_val[4];
        test_val[0] = "./calculator";
        test_val[1] = "-1";
        test_val[2] = "-";
        test_val[3] = "-3";
        AbstractFactory test;
        Base* root = test.parse(test_val, 4);
        EXPECT_EQ(root->stringify(),"(-1.000000--3.000000)");
        EXPECT_EQ(root->evaluate(), 2);
}

TEST(ParseTest, multTwoNegatives) {
        char* test_val[4];
        test_val[0] = "./calculator";
        test_val[1] = "-1";
        test_val[2] = "\*";
        test_val[3] = "-3";
        AbstractFactory test;
        Base* root = test.parse(test_val, 4);
        EXPECT_EQ(root->stringify(),"(-1.000000*-3.000000)");
        EXPECT_EQ(root->evaluate(), 3);
}

TEST(ParseTest, divTwoNegatives) {
        char* test_val[4];
        test_val[0] = "./calculator";
        test_val[1] = "-1";
        test_val[2] = "/";
        test_val[3] = "-4";
        AbstractFactory test;
        Base* root = test.parse(test_val, 4);
        EXPECT_EQ(root->stringify(),"(-1.000000/-4.000000)");
        EXPECT_EQ(root->evaluate(), 0.25);
}

TEST(ParseTest, powTwoNegatives) {
        char* test_val[4];
        test_val[0] = "./calculator";
        test_val[1] = "-2";
        test_val[2] = "\*\*";
        test_val[3] = "-3";
        AbstractFactory test;
        Base* root = test.parse(test_val, 4);
        EXPECT_EQ(root->stringify(),"(-2.000000**-3.000000)");
        EXPECT_EQ(root->evaluate(), -.125);
}


TEST(ParseTest, randomLetter) {
        char* test_val[6];
        test_val[0] = "./calculator";
        test_val[1] = "4";
        test_val[2] = "p";
        test_val[3] = "3";
        test_val[4] = "x";
        test_val[5] = "2";
        AbstractFactory test;
        Base* root = test.parse(test_val, 6);
        EXPECT_EQ(root,nullptr);
}

TEST(ParseTest, randomSymbol) {
        char* test_val[6];
        test_val[0] = "./calculator";
        test_val[1] = "4";
        test_val[2] = "(";
        test_val[3] = "3";
        test_val[4] = ")";
        test_val[5] = "2";
        AbstractFactory test;
        Base* root = test.parse(test_val, 6);
        EXPECT_EQ(root,nullptr);
}


int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
