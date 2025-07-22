#include "gmock/gmock.h"
#include <exception>
#include <iostream>

class Cal {
public:	
	// 이곳에 코드 작성
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
	Cal cal;
	EXPECT_EQ(cal.getSum(1, 1), 2) << "expect 2";
	EXPECT_EQ(cal.getSum(0, 0), 0) << "expect 0";
	
	EXPECT_EQ(1, 1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}