#include "main.h"
#include <stdio.h>
/**
 * *wstrchr - locates
 * @es: string
 * @ch: char
 * Return: pointer
 */
char *wstrchr(char *es, char ch)
{
		int ai;

		while (1)
		{
			ai = *es++;
			if (ai == ch)
			{
				return (es - 1);
			}
			if (ai == 0)
			{
				return (NULL);
			}
		}
}
