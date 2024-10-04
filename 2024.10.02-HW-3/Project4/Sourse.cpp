#include <cstdio>


int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int mx = -99999999;
	int mi = 0;
	for (int i = 1; i < n + 1; ++i) {
		int v = 0;
		int s = 0;
		scanf_s("%d %d", &v, &s);

		if (s == 1 && v > mx) {
			mx = v;
			mi = i;
		}
	}
	if (mx != -99999999) {
		printf("%d", mi);
	}
	else {
		printf("-1");

	}

	return 0;
}