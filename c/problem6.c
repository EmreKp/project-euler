#include <stdio.h>

// Difference between square of sum and sum of squares of first 100 integers.
int main(int argc, char const *argv[])
{
	int n = 100;

	int sumOfSquares = n * (n+1) * (2*n + 1) / 6;
	int sumOfIntegers = n * (n+1) / 2;

	printf("%d\n", sumOfIntegers * sumOfIntegers - sumOfSquares);

	return 0;
}