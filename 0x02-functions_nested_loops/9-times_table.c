#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, k;
	char tens, ones;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * i;

			if (j == 0)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

																			if (k < 10)
				{
					_putchar(' ');
				}
																			tens = (k / 10) + '0';
				ones = (k % 10) + '0';
				
				_putchar(tens);
				_putchar(ones);
																		}
		}
		_putchar('\n');
	}
}
