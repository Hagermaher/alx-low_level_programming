#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints he lowercase alphabet in reverse, followed by a new line.
 * return: Always(success).
 *
 */
int main(void)
{
	char low;
	for(low='z';low>='a';low --)
		putchar(low);
	putchar('\n');
	return (0);
}
