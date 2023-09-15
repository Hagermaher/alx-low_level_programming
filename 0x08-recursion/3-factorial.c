#include "main.h"
/**
 * factorial - return the number factorial
 * @n: number to return the factorial from
 * Return: factorial 0f n
 */
int factorial(int n)
{
	if (n > 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
