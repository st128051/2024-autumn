#include <cstdio>


int main(int argc, char* argv[]) {
	int n = 0;
	int e = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i) {
		int x = 0;
		scanf_s("%d", &x);
		if (x == 1) {
			++e;
		}
	}
	if (n == 1) {
		printf("0");
	}
	else if (e >= n / 2) {
		printf("%d", n - e);

	}
	else {

		printf("%d", e);
	}
}