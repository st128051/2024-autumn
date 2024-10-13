#include <cstdio>


int main(int argc, char* argv[]) {
	int arr[1000]{ 0 };
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	scanf_s("%d %d %d %d %d", &n, &a, &b, &c, &d);

	for (int i = 0; i < n; ++i) {
		arr[i] = i + 1;
	}

	int t = 1;
	for (int i = a - 1; i < a + (b - a) / 2; ++i) {
		int k = arr[b - t];
		arr[b - t] = arr[i];
		arr[i] = k;
		++t;
	}

	t = 1;
	for (int i = c - 1; i < c + (d - c) / 2; ++i) {
		int k = arr[d - t];
		arr[d - t] = arr[i];
		arr[i] = k;
		++t;
	}

	for (int i = 0; i < n; ++i) {
		printf("%d ", arr[i]);
	}
}