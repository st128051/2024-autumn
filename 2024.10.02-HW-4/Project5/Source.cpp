#include <cstdio>
#include <cmath>

int main(int argc, char* argv[]) {
	int a[1000]{ 0 };
	int n = 0;
	int x = 0;
	int res = 10000;
	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}

	scanf_s("%d", &x);

	for (int i = 0; i < n; ++i) {
		if (abs(a[i] - x) <= abs(res - x)) {
			if (abs(a[i] - x) == abs(res - x)) {
				res = a[i] < res ? a[i] : res;
			}
			else {
				res = a[i];
			}
		}
	}

	printf("%d", res);

	return 0;
}