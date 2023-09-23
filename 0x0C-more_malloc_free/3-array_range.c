#include <stdlib.h>
#include "main.h"
/**
 * array_range - create array
 * @min: mini
 * @max: maxi
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *h;
	int k, si;

	if (min > max)
		return (NULL);

	si = max - min + 1;

	h = malloc(sizeof(int) * si);

	if (h == NULL)
		return (NULL);

	k = 0;

	while (min <= max)
	{
		h[k] = min++;
		k++;
	}

	return (h);
}
