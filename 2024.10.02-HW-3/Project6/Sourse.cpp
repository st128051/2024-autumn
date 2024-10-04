#include <cstdio>


int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	int m = a * b;
	if (a < b) {
		int c = b;
		b = a;
		a = c;
	}
	while (b > 0) {
		int c = a;
		a = b;
		b = c % a;
	}

	printf("%d", m / a);
	return 0;
}