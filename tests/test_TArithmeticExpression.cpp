#include <gtest.h>

#include "TArithmeticExpression.h"


TEST(TArithmeticExpression, ConstructorTest) {
	string expr = "(a+b)*(c+d)";
	ASSERT_NO_THROW(TArithmeticExpression a(expr));
}

TEST(TArithmeticExpression, GetInfixTest) {
	string expr = "(a+b)*(c+d)";
	TArithmeticExpression a(expr);
	EXPECT_EQ(expr, a.GetInfix());
}

TEST(TArithmeticExpression, GetPostfixTest) {
	string expr = "(a+b)*(c+d)";
	string postfix = "ab+cd+*";
	TArithmeticExpression a(expr);
	EXPECT_EQ(postfix, a.GetPostfix());
}

TEST(TArithmeticExpression, GetOperandsTest) {
	string expr = "(a+b)*(c+d)";
	vector<char> operands = { 'a', 'b', 'c', 'd' };
	TArithmeticExpression a(expr);
	EXPECT_EQ(operands, a.GetOperands());
}

TEST(TArithmeticExpression, CalculateTest) {
	string expr = "(a+b)*(c+d)";
	map<char, double> values = { {'a', 1}, {'b', 2}, {'c', 3}, {'d', 4} };
	double answer = 21.0;
	TArithmeticExpression a(expr);
	EXPECT_EQ(answer, a.Calculate(values));
}