#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2 . NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int x, y;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	con = malloc(sizeof(char) * (x + y + 1));
	if (con == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		con[x] = s2[y];
		x++;
	}
	while (s2[y] != '\0')
	{
		con[x] = s2[y];
		x++, y++;
	}
	con[x] = '\0';
	return (con);
}

