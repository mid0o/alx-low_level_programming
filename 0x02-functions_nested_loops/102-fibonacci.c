#include <stdio.h>

/**
 * main - Entry point for printing the first 50 Fibonacci numbers.
 * Return: Always 0
 */
int main(void)
{
	int n = 50;
	unsigned long long first = 1, second = 2, next;
	printf("%llu, %llu, ", first, second);

	for (int i = 3; i <= n; i++)
	{
		next = first + second;
		printf("%llu", next);
		
		if (i < n)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

			first = second;
			second = next;
	}

	return (0);
}
