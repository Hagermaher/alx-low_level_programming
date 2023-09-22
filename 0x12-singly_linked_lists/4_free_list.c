#include <stdio.h>
#include "main.h"

/**
 * free_list - free
 * @head: list
 */
void free_list(list_t *head)
{
	list_t *g;

	while (head)
	{
		g = head->next;
		free(head->str);
		free(head);
		head = g;
	}
}
