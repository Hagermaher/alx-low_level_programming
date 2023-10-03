#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *buff(char *file);
void cf(int s);

/**
 * buff - allocat 1024
 * @file: file name
 * Return : pointer
 */
char *buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Cant write to %s\n", file);
		exit(99);
	}

	return (buff);
}
/**
 * cs - close file
 * @f: file
 */
void cs(int f)
{
	int x;

	x = close(f);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f %d\n", f);
		exit(100);
	}
}
/**
 * cp - copy file content to other
 * @argc: num
 * @argv: array
 * Return: 0
 * Description: argumebt conditions
 */
int cp(int argc, char *argv[])
{
	int fr, el, re, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

