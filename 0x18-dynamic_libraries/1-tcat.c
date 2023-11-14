#include "main.h"

/**
 * wstrncat - concatenates
 * @dst: destination
 * @sr: sourc
 * @n: num
 * Return: pointer
 */
char *wtrncat(char *dst, char *sr, int nm)
{
	int k, l;

	k = 0;
	l = 0;

	while (dst[k] != '\0')
		k++;

	while (sr[l] != '\0' && l < nm)
	{
		dst[k] = sr[l];
		k++;
		l++;
	}

	dst[k] = '\0';

	return (dst);
}
