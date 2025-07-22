#include <iostream>
#include "gmock/gmock.h"

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