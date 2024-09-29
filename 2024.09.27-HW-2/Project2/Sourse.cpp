#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {
	int x = 0;
	int y = 0;


	scanf_s("%d", &x);
	scanf_s("%d", &y);

	if (abs(x - y) > 0) {
		printf("1");
	}
	else if (x == y && x != 1) {
		printf("2");
	}
	else if (x == 1 && y == 1) {
		printf("0");
	}
	else {
		printf("0");
	}

	return EXIT_SUCCESS;
}