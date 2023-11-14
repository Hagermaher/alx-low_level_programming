#include "main.h"

/**
 * wstrncpy - copi
 * @dst: destination
 * @sr: source
 * @nm: num
 * Return: pointer
 */
char *wstrncpy(char *dst, char *sr, int nm)
{
	int k;

	k = 0;

	while (sr[k] != '\0' && k < nm)
	{
		dst[k] = sr[k];
		k++;
	}

	while (k < nm)
	{
		dst[k] = '\0';
		k++;
	}

	return (dst);
}
