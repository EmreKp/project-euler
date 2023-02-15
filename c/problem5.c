#include <stdio.h>

// Find largest prime factor of big long number.
int main(int argc, char const *argv[])
{
	long number = 600851475143;
	long divider = 3;

	while (number > 1) {
		if (number % divider == 0) {
			number /= divider;
		} else {
			divider += 2;
		}
	}

	printf("%li\n", divider);

	return 0;
}