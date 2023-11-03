#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - creates an array of integers
 * @min: integer
 * @max: integer
 * Return: pointer to an array of integers
 */

int *array_range(int min, int max)
{
	int diff, *arr, j, i;


	if (min > max)
		return (NULL);

	diff = (max + 1) - min;

	arr = malloc(sizeof(int) * diff);

	if (arr == NULL)
		return (NULL);

	j = 0;
	for (i = min; i <= max; i++, j++)
	{
		arr[j] = i;
	}
	return (arr);
}
