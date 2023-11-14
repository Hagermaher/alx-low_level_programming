#include "main.h"

/**
 * wstrlen - returns the length
 * @es: strin
 * Return: len
 */
int wstrlen(char *es)
{
	int k = 0;

	while (es[k] != '\0')
	{
		k++;
	}

	return (k);
}
