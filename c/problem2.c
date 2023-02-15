#include <stdio.h>

int main(int argc, char const *argv[])
{
	const int MAX_INDEX = 11;
	int total = 0;

	for (int n = 0; n < MAX_INDEX; n++) {
		total += evenFibo(n);
	}

	printf("%d\n", total);

	return 0;
}

int evenFibo(int n) {
	if (n < 0) return 0;
	if (n == 0) return 2;

	return 4 * evenFibo(n-1) + evenFibo(n-2);
}