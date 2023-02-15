#include <stdio.h>

// Sum of multiples of 3 or 5 below 1000.
int main(int argc, char const *argv[])
{
	int sum = 0;

	for (int no = 3; no < 1000; no++) {
		if (no % 3 == 0 || no % 5 == 0) {
			sum += no;
		}
	}

	printf("%d\n", sum);

	return 0;
}