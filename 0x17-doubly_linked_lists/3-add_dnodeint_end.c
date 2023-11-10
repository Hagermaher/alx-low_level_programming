#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add
 * @head: double
 * @n: valu
 * Return: pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ne, *tm;

	if (head == NULL)
		return (NULL);
	ne = malloc(sizeof(dlistint_t));
	if (ne == NULL)
		return (NULL);
	ne->n = n;
	ne->next = NULL;
	if (*head == NULL)
	{
		ne->prev = NULL;
		*head = ne;
		return (ne);
	}
	tm = *head;
	while (tm->next != NULL)
		tm = tm->next;
	tm->next = ne;
	ne->prev = tm;
	return (ne);
}
