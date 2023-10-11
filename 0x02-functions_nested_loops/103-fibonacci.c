#include <stdio.h>

/**
 * main - Entry point for finding and printing the sum of even-valued Fibonacci terms.
 * Return: Always 0
 */
int main(void) {
	unsigned long long first = 1, second = 2, next;
	unsigned long long sum = 2;

	while (1)
	{
		next = first + second;
		if (next > 4000000)
		{
			break;
		}

		if (next % 2 == 0)
		{
			sum += next;
		}

		first = second;
		second = next;
	}

	printf("%llu\n", sum);

	return (0);
}
