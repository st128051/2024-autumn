#include <cstdio>


int main(int argc, char* argv[]) {
	int a[1000]{ 0 };
	int n = 0;
	int h = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}

	scanf_s("%d", &h);

	int c = 0; 

	for (int i = 0; i < n; ++i) {
		if (h <= a[i]) {
			c = i;
		
		}
	}

	printf("%d", c  + 2);

	return 0;
}