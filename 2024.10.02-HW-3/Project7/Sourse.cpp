#include <cstdio>


int main(int argc, char* argv[]) {
	long long n = 0;
	long long m = 0;
	scanf_s("%lld", &n);
	scanf_s("%lld", &m);

	long long a = n;
	long long b = m;
	
	if (a < b) {
		long long c = b;
		b = a;
		a = c;
	}
	while (b > 0) {
		long long c = a;
		a = b;
		b = c % a;
	}
	printf("%lld", ((m / a) * n) / m);
	
	return 0;
}