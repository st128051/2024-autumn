#include <cstdio>


int main(int argc, char* argv[]) {
	int a[1000]{ 0 };
	int n = 0;
	int mx = -9999999;
	int mn = 9999999;
	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}

	for (int i = 0; i < n; ++i) {
		if (a[i] > mx) {
			mx = a[i];
		}
		if (a[i] < mn) {
			mn = a[i];
		}

	}

	for (int i = 0; i < n; ++i) {
		if (a[i] == mx) {
			a[i] = mn;
		}

	}

	for (int i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}

	return 0;
}