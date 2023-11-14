#include "main.h"

/**
 * wputs - prints
 * @str: pointer
 */
void wputs(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		wputchar(str[k]);
	}
	wputchar('\n');
}
