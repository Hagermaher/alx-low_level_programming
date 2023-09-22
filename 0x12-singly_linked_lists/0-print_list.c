#include <stdio.h>
#include "lists.h"
/**
 * print_list - print element
 * @h: pointer
 * Return: num
 */
size_t print_list(const list_t *h)
{
	size_t d = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->str);
		h = h->next;
		d++;
	}
	return (d);
}
