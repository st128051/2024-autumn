#include <cstdio>


int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int count = 0;
	for (int i = 1; i < n + 1; ++i) {
		for (int j = 1; j < n + 1; ++j) {
			int x = 0;
			scanf_s("%d", &x);
			if (j >= i + 1 && x == 1) {
				++count;
			}
		}
	}

	printf("%d", count);
	return 0;
}