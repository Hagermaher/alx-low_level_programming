#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print
 * @h: pointer
 * Return: num
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t w;

	for (w = 0; h != NULL; w++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (w);
}
