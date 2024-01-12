#include "lists.h"

/**
 * free_dlistint - Free the tempory
 * @head: Pointer to head
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
