#include <cstdio>


int main(int argc, char* argv[]) {
	int a[1000]{ 0 };
	int n = 0;
	int l = 0;
	int r = 0;
	int mx = -9999999;
	int mx_i = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}

	scanf_s("%d %d", &l, &r);

	for (int i = l-1; i <= r-1; ++i) {
		if (a[i] > mx) {
			mx = a[i];
			mx_i = i;
		}
	}

	printf("%d %d", mx, mx_i + 1);

	return 0;
}