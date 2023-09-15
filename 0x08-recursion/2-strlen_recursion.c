#include "main.h"
/**
 * _strlen_recursion - return string lenth
 * @s: input
 * Return: string lenght
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if  (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
