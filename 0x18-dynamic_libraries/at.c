#include "main.h"

/**
 * watoi - converts
 * @es: string
 * Return: int
 */
int watoi(char *es)
{
	int k, d, nm, len, f, digit;

	k = 0;
	d = 0;
	nm = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (es[len] != '\0')
		len++;

	while (k < len && f == 0)
	{
		if (es[k] == '-')
			++d;

		if (es[k] >= '0' && es[k] <= '9')
		{
			digit = es[k] - '0';
			if (d % 2)
				digit = -digit;
			nm = nm * 10 + digit;
			f = 1;
			if (es[k + 1] < '0' || es[k + 1] > '9')
				break;
			f = 0;
		}
		k++;
	}

	if (f == 0)
		return (0);

	return (nm);
}
