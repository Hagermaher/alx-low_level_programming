#include "main.h"
/**
 * *wstrcpy - copies
 * @dst: pointer
 * @sr: stri
 * Return: pointer
 */
char *wstrcpy(char *dst, char *sr)
{
	int len, k;

	len = 0;

	while (sr[len] != '\0')
	{
		len++;
	}

	for (k = 0; k < len; k++)
	{
		dst[k] = sr[k];
	}
	dst[k] = '\0';

	return (dst);
}
