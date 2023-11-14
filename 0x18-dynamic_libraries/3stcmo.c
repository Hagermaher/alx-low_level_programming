#include "main.h"

/**
 * wstrcmp - compares
 * @es1: first string
 * @es2: second string
 * Return: less than 0
 */
int wstrcmp(char *es1, char *es2)
{
	while (*es1 == *es2)
	{
		if (*es1 == '\0')
		{
			return (0);
		}
		es1++;
		es2++;
	}
	return (*es1 - *es2);
}
