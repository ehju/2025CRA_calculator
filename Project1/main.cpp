#include <iostream>
#include "gmock/gmock.h"
#include <exception>
class Cal {
public:	
	// 이곳에 코드 작성

	int getGop(int a, int b)
	{
		return a * b;
	}

	int getZegop(int a){
		return a * a;
  }
	int getSum(int a, int b) {
		return a + b;
	}
  int getSumSum(int a, int b, int c) {
	  return a + b + c;
  }
  int getDivide(int a, int b)
	{
		if (b == 0)
			throw std::exception("EINVAL - divide by zero\n");
		else
			return a / b;
	}
  
	int getMinus(int a, int b) {
	  return a - b;
	}
};
// 테스트케이스 작성
TEST(getSumSumTest, TC_NormalSumSum) {
	Cal c = Cal();
	
	EXPECT_EQ(6, c.getSumSum(1,2,3));
}
TEST(getSumSumTest, TC_MinusSumSum) {
	Cal c = Cal();

	EXPECT_EQ(-6, c.getSumSum(-3, -2, -1));
}

TEST(getGopTC, TC1)
{
	Cal cal;
	int ret = cal.getGop(4, 5);
	EXPECT_EQ(ret, 20);
}

TEST(getGopTC, TC2)
{
	Cal cal;
	int ret = cal.getGop(4, 0);
	EXPECT_EQ(ret, 0);
}

TEST(getGopTC, TC3)
{
	Cal cal;
	int ret = cal.getGop(4, -5);
	EXPECT_EQ(ret, -20);
}
TEST(t1, t3) {
	Cal cal;
	EXPECT_EQ(4, cal.getZegop(2));
}

TEST(t1, t5) {
	Cal cal;
	EXPECT_EQ(2, cal.getMinus(4, 2));

TEST(t1, divide_basic) {
	Cal cal;
	int actual = cal.getDivide(10, 2);
	EXPECT_EQ(actual, 5);

}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}



TEST(MinusTest, TCMINUS) {
	MINUS a;
	int ret = a.minus(5, 3);

	EXPECT_EQ(ret, 2);
}