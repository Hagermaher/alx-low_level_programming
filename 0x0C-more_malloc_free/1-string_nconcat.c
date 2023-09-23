#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates bytes of string
 * @s1: string
 * @s2: string
 * @n: num
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *f;
	unsigned int w, t, l1, l2;

	w = 0;
	t = 0;
	l1 = 0;
	l2 = 0;

	while (s1 && s1[l1])
		l1 = l1 + 1;
	while (s2 && s2[l2])
		l2 = l2 + 1;
	if (n < l2)
		f = malloc(sizeof(char) * (l1 + n + 1));
	else
		f = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!f)
		return (NULL);

	while (w < l1)
	{
		f[w] = s1[w];
		w++;
	}

	while (n < l2 && w < (l1 + n))
		f[w++] = s2[t++];
	while (n >= l2 && w < (l1 + l2))
		f[w++] = s2[t++];

	f[w] = '\0';

	return (f);
}

