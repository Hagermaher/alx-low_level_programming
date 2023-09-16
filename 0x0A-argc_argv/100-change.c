#include <stdi0.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of argumnets
 * @argv: array of arguments
 * Return: 0 (on success)
 */
int main(int argc, char *argv[])
{
	int num, res, j;
	int consit[] = (25, 10, 5, 2, 1);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	res = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= consit[j])
		{
			res++;
			num -= consit[j];
		}
	}
	printf("%d\n", res);
	return (0);
}

