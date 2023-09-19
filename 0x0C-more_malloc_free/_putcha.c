#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: input
 * Return: on success 1 . on erroe -1 is returned and -1 is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
