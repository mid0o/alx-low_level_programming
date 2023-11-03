#include "main.h"
#include <stdlib.h>

int check_int(char *);
int convert(char *);
/**
 * main - multiplies 2 positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int a, b, num1, num2, mul, i, e, n;
	char *s = "Error\n";


	if (argc > 2 && argc < 4)
	{
		a = check_int(argv[1]);
		b = check_int(argv[2]);

		if (a == 1 && b == 1)
		{
			num1 = convert(argv[1]);
			num2 = convert(argv[2]);

			mul = num1 * num2;

			e = 0;
			n = mul;
			while (mul != 0)
			{
				e *= 10;
				e += (mul % 10);
				mul /= 10;
			}
			while (e != 0)
			{
				_putchar((e % 10) + '0');
				e = e / 10;
			}
			if ((n % 10) == 0)
			{
				_putchar(48);
			}
			_putchar('\n');
			return (0);
		}
		else
		{
			i = 0;
			while (s[i] != '\0')
			{
				_putchar(s[i]);
				i++;
			}
			exit(98);
		}
	}
	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	exit(98);
}
/**
 * check_int - checks for an integer
 * @s: string
 * Return: 1 or 0 success
 */
int check_int(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < 48 || s[i] > 59)
			return (0);

		i++;
	}
	return (1);
}
/**
 * convert - converts a string into a character
 * @s: the string to convert
 * Return: integer
 */
int convert(char *s)
{
	int i, n;

	i = 0;
	n = 0;

	while (s[i] != '\0')
	{
		n = n * 10 + (s[i] - '0');
		i++;
	}
	return (n);
}
