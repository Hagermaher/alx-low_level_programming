#include "lists.h"

/**
 * get_dnodeint_at_index - finds
 * @head: pointe
 * @index: index
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int w;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (w = 0; w < index; w++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
