#include "lists.h"

/**
 * add_dnodeint_end - Add a node in the tail
 * @head: Pointer to direction of the head
 * @n: The data integer
 * Return: The direction of the tail node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *last;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	last = *head;

	if (*head == NULL)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		while (last->next)
			last = last->next;
		last->next = temp;
	}
	temp->prev = last;

	return (temp);
}
