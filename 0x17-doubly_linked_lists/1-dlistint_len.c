#include "lists.h"
/**
 * dlistint_len - count
 * @h: pointer
 * Return: num
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t w;

	for (w = 0; h != NULL; w++)
		h = h->next;
	return (w);
}
