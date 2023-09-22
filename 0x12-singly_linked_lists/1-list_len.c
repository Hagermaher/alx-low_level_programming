#include <stdio.h>
#include "lists.h"
/**
 * list_len - return the number
 * @h: pointer
 * Return: num
 */
size_t list_len(const list_t *h)
{
	size_t v = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (v);
}
