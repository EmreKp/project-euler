#include <stdio.h>

// Sum of even Fibonacci numbers below 4 million.
int main(int argc, char const *argv[])
{
	const int MAX_LIMIT = 4000000;

	int n = 0;
	int total = 0;

	while (total < MAX_LIMIT) {
		total += evenFibo(n);
		n++;
	}

	printf("%d\n", total);

	return 0;
}

int evenFibo(int n) {
	if (n < 0) return 0;
	if (n == 0) return 2;

	return 4 * evenFibo(n-1) + evenFibo(n-2);
}