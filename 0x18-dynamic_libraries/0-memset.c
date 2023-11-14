#include "main.h"

/**
 * *wmemset - fills
 * @es: memory
 * @bi: copy
 * @nm: number
 * Return: pointe
 */
char *wmemset(char *es, char bi, unsigned int nm)
{
	unsigned int k;

	for (k = 0; k < nm; k++)
	{
		es[k] = bi;
	}

	return (es);
}
