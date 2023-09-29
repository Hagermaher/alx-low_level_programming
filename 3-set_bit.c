#include "main.h"
/**
 * set_bit - set a bit
 * @n: pointer
 * @index: index
 * Return: 1 success, -1 failer.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 61)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
