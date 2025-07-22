#include <iostream>
#include "gmock/gmock.h"
#include <exception>
#include <iostream>

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
};
// 테스트케이스 작성
TEST(t1, t2) {
	Cal calSum;
	EXPECT_EQ(calSum.getSum(1, 1), 2) << "expect 2";
	EXPECT_EQ(calSum.getSum(0, 0), 0) << "expect 0";
	
	EXPECT_EQ(1, 1);
	Cal c = Cal();
	
	EXPECT_EQ(6, c.getSumSum(1,2,3));
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

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}

class MINUS {
public:
	int minus(int a, int b) {
		return a - b;
	}
};

TEST(MinusTest, TCMINUS) {
	MINUS a;
	int ret = a.minus(5, 3);

	EXPECT_EQ(ret, 2);
}