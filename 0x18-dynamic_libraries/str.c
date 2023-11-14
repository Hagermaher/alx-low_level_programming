#include "main.h"
#include <stdio.h>

/**
 * *wstrstr - locate
 * @hystc: string
 * @ndl: substr
 * Return: pointer
 */
char *wstrstr(char *hystc, char *ndl)
{
	int k, l;

	for (k = 0; hystc[k] != '\0'; k++)
	{
		for (l = 0; ndl[l] != '\0'; l++)
		{
			if (hystc[k + l] != ndl[l])
				break;
		}
		if (!ndl[l])
			return (&hystc[k]);
	}
	return (NULL);
}
