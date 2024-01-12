#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at nth
 *
 * @head: Pointer to direction of the head
 * @index: The position in de ll
 *
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ieee, *memory = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = memory->next;
		if (memory->next == NULL)
			return (-1);
		memory->next->prev = NULL;
		free(memory);
		return (1);
	}

	while (count < index)
	{
		if (memory->next == NULL)
			return (-1);
		memory = memory->next;
		count++;
	}
	memory->prev->next = memory->next;
	if (memory->next)
		memory->next->prev = memory->prev;
	if (memory->next == NULL)
	{
		ieee = memory->prev;
		ieee->next = NULL;
		free(memory);
		return (1);
	}
	free(memory);
	return (1);
}
