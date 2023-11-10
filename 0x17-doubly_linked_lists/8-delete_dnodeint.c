#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - delete
 * @head: double
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *crnt;
	unsigned int w;

	if (head == NULL || *head == NULL)
		return (-1);
	crnt = *head;
	if (index == 0)
	{
		*head = crnt->next;
		if (crnt->next != NULL)
		{
			crnt->next->prev = NULL;
		}
		free(crnt);
		return (1);
	}
	for (w = 0; i < index; w++)
	{
		if (crnt->next == NULL)
			return (-1);
		crnt = crnt->next;
	}
	crnt->prev->next = crnt->next;
	if (crnt->next != NULL)
		crnt->next->prev = crnt->prev;
	free(crnt);
	return (1);
}
