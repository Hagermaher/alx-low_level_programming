#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a newline
 * return:  Always (success).
 *
 */
int main(void)
{
	char c;
	for (c ='a';c <= 'z' ;c++)
	putchar(c);
	putchar('\n');
	return (0);
}
