#include <cstdio>


int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	for (int i = 1; i < n + 1; ++i) {
		int h = 0;
		scanf_s("%d", &h);

		if (h <= 437) {
			printf("Crash %d", i);
			return 0;
		}
	}

	printf("No crash");
	return 0;
}