#include "main.h"
/**
 * flip_bits - count
 * @n: num1
 * @m: num2
 * Return: num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int l, coun;
	unsigned long int cur;
	unsigned long int ex;

	l = 0;
	ex = n ^ m;

	for (l = 63; l >= 0; l--)
	{
		cur = ex >> l;
		if (cur & 1)
			coun = coun + 1;
	}
	return (coun);
}
