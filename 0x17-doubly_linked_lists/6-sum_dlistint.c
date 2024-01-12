#include "lists.h"
/**
 * sum_dlistint - Sum of the data (n)
 *
 * @head: Pointer to the head
 *
 * Return: The result of the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int addition = 0;

	while (head != NULL)
	{
		addition += head->n;
		head = head->next;
	}
	return (addition);
}
