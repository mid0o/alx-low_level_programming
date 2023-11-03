#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a new space of memory
 * @ptr: pointer to an allocated memory space
 * @old_size: integer
 * @new_size: integer
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *p1;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}

	p = malloc(new_size);

	if (!p)
		return (NULL);


	p1 = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = p1[i];
	}
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = p1[i];
	}

	free(ptr);
	return (p);

}
