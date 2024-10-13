#include <cstdio>


int main(int argc, char* argv[]) {
	int a[1002]{ 0 };
	int n = 0;
	int mx = -9999999;

	scanf_s("%d", &n);

	for (int i = 1; i < n + 1; ++i) {
		scanf_s("%d", a + i);
	}

	a[0] = a[n];
	a[n + 1] = a[1];

	for (int i = 0; i < n; ++i) {
		if (a[i - 1] + a[i] + a[i + 1] > mx) {
			mx = a[i - 1] + a[i] + a[i + 1];
		}
	}
	
	printf("%d", mx);
	
	return 0;
}