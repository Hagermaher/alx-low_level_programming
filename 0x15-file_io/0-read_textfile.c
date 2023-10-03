#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read
 * @filename: text
 * @letters: num
 * Return: w
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t f;
	ssize_t w;
	ssize_t q;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	q = read(f, b, letters);
	q = write(STDOUT_FILENO, b, q);

	free(b);
	close(f);
	return (w);
}
