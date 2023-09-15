#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - return a number natural sqare root
 * @n: number to calculate the square number of
 * Return: the reslting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recures to find the natural square root of a number
 * @n: number to calculate the square number of
 * @i: iterator
 *
 * Return: the reslting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
