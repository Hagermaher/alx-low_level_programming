#include <stdio.h>
#include "main.h"
/**
 * main - print all argument
 * @argc: number of argument
 * @argv: array of argument
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
