#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			char tens_hr = (hr / 10) + 48;
			char ones_hr = (hr % 10) + 48;
			char tens_min = (min / 10) + 48;
			char ones_min = (min % 10) + 48;

			_putchar(tens_hr);
			_putchar(ones_hr);
			_putchar(':');
			_putchar(tens_min);
			_putchar(ones_min);
			_putchar('\n');
		}
	}
}
