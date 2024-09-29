#include <iostream>

int main(int argc, char* argv[]) {
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	int b1 = 0;
	int b2 = 0;
	int b3 = 0;
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;

	scanf_s("%d", &a1); scanf_s("%d", &a2); scanf_s("%d", &a3);
	scanf_s("%d", &b1); scanf_s("%d", &b2); scanf_s("%d", &b3);
	scanf_s("%d", &c1); scanf_s("%d", &c2); scanf_s("%d", &c3);

	if (a1 > a2) { int k = a2; a2 = a1; a1 = k; }
	if (b1 > b2) { int k = b2; b2 = b1; b1 = k; }
	if (c1 > c2) { int k = c2; c2 = c1; c1 = k; }

	int x = 0;
	int y = 0;
	int z = 0;

	if (a3 + b3 > a1 + b1) {
		z = a3 > b3 ? a3 : b3;
		y = a2 > b2 ? a2 : b2;
		x = a1 + b1;
	}
	else if (a3 + b3 == a1 + b1) {
		if (c1 > c3) {
			z = a3 > b3 ? a3 : b3;
			y = a2 > b2 ? a2 : b2;
			x = a1 + b1;
		}
		else {
			z = a3 + b3;
			y = a2 > b2 ? a2 : b2;
			x = a1 > b1 ? a1 : b1;
		}
	}
	else {
		z = a3 + b3;
		y = a2 > b2 ? a2 : b2;
		x = a1 > b1 ? a1 : b1;
	}

	if (x > y) { int k = y; y = x; x = k; }


	if (a1 * a2 * a3 + b1 * b2 * b3 > c1 * c2 * c3) {
		printf("NO");
	}
	else if (a3 > c3 || b3 > c3) {
		printf("NO");
	}
	else if (z > c3) {
		printf("NO");
	}
	else if (x <= c1 && y <= c2 && z <= c3) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return EXIT_SUCCESS;
}