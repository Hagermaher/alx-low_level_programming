#include "main.h"
/**
 * char *strcpy - function copies the string points to src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for (; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
