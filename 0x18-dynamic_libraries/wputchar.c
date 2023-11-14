#include <unistd.h>

/**
 * wputchar - writes char
 * @ch: char
 * Return: 1
 */
int wputchar(char ch)
{
	return (write(1, &ch, 1));
}
