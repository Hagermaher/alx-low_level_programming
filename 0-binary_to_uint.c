#include "main.h"
/**
 * binary_to_uint - convert to binary
 * @b: string
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int de;

	de = 0;

	if (!b)
		return (0);

	l = 0;
	while (b[l])
	{
		if (b[l] < '0' || b[l] > '1')
			return (0);
		de = 2 * de + (b[l] - '0');
		l++;
	}

	return (de);
}
