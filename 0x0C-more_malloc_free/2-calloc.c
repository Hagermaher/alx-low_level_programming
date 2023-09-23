#include <stdlib.h>
#include "main.h"

/**
 * _memset - fill memory
 * @s: memory area
 * @b: char
 * @n: number
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
		s[e] = b;

	return (s);
}
/**
 * _calloc - allocate
 * @nmemb: num
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *h;

	if (nmemb == 0 || size == 0)
	return (NULL);

	h = malloc(size * nmemb);
	if (h == NULL)
	return (NULL);

	_memset(h, 0, nmemb * size);

	return (h);
}
