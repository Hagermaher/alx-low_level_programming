#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - add
 * @head: doubl
 * @n: value
 * Return: pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ne;

	if (head == NULL)
		return (NULL);
	ne = malloc(sizeof(dlistint_t));
	if (ne == NULL)
		return (NULL);
	ne->n = n;
	ne->prev = NULL;
	ne->next = *head;
	*head = ne;
	if (ne->next != NULL)
		(ne->next)->prev = ne;
	return (ne);
}
