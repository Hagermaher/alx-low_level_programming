#include "main.h"

/**
 * *wmemcpy - copies
 * @dst: destination
 * @sr: memor
 * @nm: num
 * Return: pointer
 */
char *wmemcpy(char *dst, char *sr, unsigned int nm)
{
	unsigned int k;

	for (k = 0; k < nm; k++)
	{
		dst[k] = sr[k];
	}

	return (dst);
}
