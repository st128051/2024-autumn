#include <cstdio>


int main(int argc, char* argv[]) {
	int k = 0;
	scanf_s("%d", &k);

	for (int i = 0; i < k; ++i) {
		int n = 0;
		int m = 0;
		scanf_s("%d %d", &n, &m);
		printf("%d\n", 19 * m + (n + 239) * (n + 366) / 2);
	}

}