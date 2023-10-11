#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				char tens = (prod / 10) + 48;
				char ones = (prod % 10) + 48;
				_putchar(tens);
				_putchar(ones);
		}
		_putchar('\n');
	}
}
