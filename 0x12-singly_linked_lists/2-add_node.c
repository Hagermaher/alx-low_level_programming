#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - add
 * @head: pointer
 * @str: new string
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *j;
	unsigned int l = 0;

	while (str[l])
		l++;

	j = malloc(sizeof(list_t));
	if (!j)
		return (NULL);

	j->str = strdup(str);
	j->len = l;
	j->next= (*head);
	(*head) = j;

	return (*head);
}
