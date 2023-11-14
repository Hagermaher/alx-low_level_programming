#include "main.h"

/**
 * *wstrspn - gets len
 * @es: str
 * @acpt: string
 * Return: num
 */
unsigned int wstrspn(char *es, char *acpt)
{
	int k, l, f, flag;

	f = 0;

	for (k = 0; es[k] != '\0'; k++)
	{
		flag = 0;
		for (l = 0; acpt[l] != '\0'; l++)
		{
			if (es[k] == acpt[l])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
