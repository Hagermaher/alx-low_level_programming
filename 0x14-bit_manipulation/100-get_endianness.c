#include "main.h"
/**
 * get_endianness - check
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int l;
	char *c = (char *) &l;

	l = 1;

	return (*c);
}
