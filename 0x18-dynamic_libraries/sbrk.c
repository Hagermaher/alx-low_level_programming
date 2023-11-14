#include "main.h"
#include <stdio.h>

/**
 * *wstrpbrk - searches
 * @ws: string
 * @acpt: stringcontaining
 * Return: pointer
 */
char *wstrpbrk(char *es, char *acpt)
{
	int k, l;

	for (k = 0; *es != '\0'; k++)
	{
		for (l = 0; acpt[l] != '\0'; l++)
		{
			if (*es == acpt[l])
			{
				return (es);
			}
		}
		es++;
	}

	return (NULL);
}

