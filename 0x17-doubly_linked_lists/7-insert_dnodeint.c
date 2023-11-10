#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_dnodeint_at_index - inserts
 * @h: double
 * @idx: index
 * @n: data
 * Return: pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ne, *next, *crnt;
	unsigned int w;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (w = 0; i < idx - 1 && crnt != NULL; i++)
			crnt = crnt->next;
		if (crnt == NULL)
			return (NULL);
	}
	ne = malloc(sizeof(dlistint_t));
	if (ne == NULL)
		return (NULL);
	ne->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = ne;
		ne->prev = NULL;
	}
	else
	{
		ne->prev = crnt;
		next = curnt->next;
		crnt->next = ne;
	}
	ne->next = next;
	if (ne->next != NULL)
		ne->next->prev = ne;
	return (ne);
}
