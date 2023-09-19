#include <stdlib.h>
#include "main.h"
/**
 * malloc_ checked - allocate memory
 * @b: num of bytes
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);

	if (k == NULL)
		exit(98);

	return (k);
}

