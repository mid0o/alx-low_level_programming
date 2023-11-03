#include "main.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int _length(char *ch);
/**
 * *string_nconcat - concatinates two strings
 * @s1: string
 * @s2: string
 * @n: integer
 * Return: pointer to s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >  _length(s2))
		n = _length(s2);

	s = malloc(sizeof(char) * (_length(s1) + n + 1));

	if (!s)
	{
		return (NULL);
	}
	i = 0;
	while (i < _length(s1))
	{
		s[i] = s1[i];
		i++;
	}
	for (j = 0; n > 0; i++, j++)
	{
		s[i] = s2[j];
		n--;
	}
	s[i] = '\0';
	return (s);
}
/**
 * _length - returns the length of a string
 * @ch: string
 * Return: integer
 */
unsigned int _length(char *ch)
{
	int i;

	i = 0;
	while (ch[i] != '\0')
		i++;

	return (i);
}
