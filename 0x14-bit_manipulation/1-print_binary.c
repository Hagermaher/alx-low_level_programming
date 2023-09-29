#include "main.h"
/**
 * print_binary - print binary
 * @n: num
 */
void print_binary(unsigned long int n)
{
	int l, coun;
	unsigned long int cur;

	for (l = 63; l >= 0; l--)
	{
		cur = n >> l;

		if (cur & 1)
		{
			_putchar('1');
			coun = coun + 1;
		}
		else if (coun)
			_putchar('0');
	}
	if (!coun)
		_putchar('0');
}
