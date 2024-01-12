#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node in the postion
 *
 * @h: Pointer to direction of the head
 * @n: The data integer
 * @idx: Position at the insert the new node
 *
 * Return: The direction of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *memory = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (memory == NULL)
			return (NULL);
		memory = memory->next;
	}

	if (memory->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = memory->next;
	new->prev = memory;
	memory->next->prev = new;
	memory->next = new;

	return (new);
}
