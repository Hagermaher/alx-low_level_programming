#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes a character to stdout
 * @c: character to print
 * Return: on success 1. on error -1 ,errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}