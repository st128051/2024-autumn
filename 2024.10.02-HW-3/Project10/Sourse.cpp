#include <cstdio>


int main(int argc, char* argv[]) {
	int n = 0;

	scanf_s("%d", &n);

	int mx = -99999;
	int d = 0;

	for (int i = 0; i < n; ++i) {
		int t = 0;

		scanf_s("%d", &t);

		if (t > 0) {
			d += 1;
			if (mx < d) {
				mx = d;
			}
		}
		else {
			if (mx < d) {
				mx = d; 
			}
			d = 0;
		}
	}

	printf("%d", mx);
	return 0;
}