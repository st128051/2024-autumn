#include <cstdio>



int main(int argc, char* argv[]) {
	int i = 0;
	int j = 0;

	scanf_s("%d", &i);
	scanf_s("%d", &j);

	if (j > i) {
		int c = i;
		i = j;
		j = c;
	}
	while (j > 0) {
		int c = i;
		i = j;
		j = c % i;
	}
	int r = i;
	int ans = 0;
	if (r == 1){
		ans = 1;
	}
	else if (r == 2){
		ans = 1;
	}
	else{
		int f1 = 1;
		int f2 = 1;
		for (int i = 2; i < r; ++i){
			int f = (f1 + f2) % (1'000'000'000);
			f1 = f2;
			f2 = f;
			ans = f;
		}	
	}
	printf("%d", ans % 1'000'000'000);

	return 0;
}