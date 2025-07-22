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

