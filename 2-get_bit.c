#include "main.h"
/**
 * get_bit - return value
 * @n: num
 * @index: index
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int vit;

	if (index > 63)
		return (-1);

	vit = (n >> index) & 1;

	return (vit);
}
