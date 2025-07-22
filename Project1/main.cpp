#include "gmock/gmock.h"
#include <exception>
class Cal {
public:
	// 이곳에 코드 작성
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
	EXPECT_EQ(1, 1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}