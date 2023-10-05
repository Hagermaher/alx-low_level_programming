#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *buff(char *file);
void cf(int s);

/**
 * buff - allocat 1024
 * @file: file name
 * Return: pointer
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
 * Return: 0 on success
 * Description: argumebt conditions
 */
int cp(int argc, char *argv[])
{
	int fr, el, re, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = buff(argv[2]);
	fr = open(argv[1], O_RDONLY);
	re = read(fr, buffer, 1024);
	el = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fr == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(el, buffer, re);
		if (el == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		re = read(fr, buffer, 1024);
		el = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);

	free(buffer);
	cf(fr);
	cf(el);

	return (0);
}
