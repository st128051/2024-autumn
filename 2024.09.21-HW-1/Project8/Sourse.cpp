#include <iostream>

int main(int argc, char* argv[]) {
	int a = 0;

	scanf_s("%d", &a);
	printf("%d", a % 10 + (a - a % 10) / 10 % 10 + (a - a % 100) / 100 % 10);

	return EXIT_SUCCESS;
}