#include <cstdio>


int main(int argc, char* argv[]) {
	int a[1000]{0};
	int n = 0;
	int x = 0;
	int c = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}

	scanf_s("%d", &x);

	for (int i = 0; i < n; ++i) {
		if (a[i] == x) {
			++c;
		}
	}

	printf("%d", c);

	return 0;
}