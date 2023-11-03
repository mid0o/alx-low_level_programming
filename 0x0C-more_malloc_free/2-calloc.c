#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an  array
 * @nmemb: number of members
 * @size: size of each memeber
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
