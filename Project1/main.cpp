#include "gmock/gmock.h"
#include <exception>
class Cal {
public:
	// �̰��� �ڵ� �ۼ�
	int getDivide(int a, int b)
	{
		if (b == 0)
			throw std::exception("EINVAL - divide by zero\n");
		else
			return a / b;
	}
};
// �׽�Ʈ���̽� �ۼ�
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}