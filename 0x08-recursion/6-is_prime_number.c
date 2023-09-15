#include "main.h"

int actual_prime(int n, int i);
/**
 * is_prime_number - says the integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is prime. 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculate if number is prime recusively
 * @n: number to evaluate
 * @i: iterator
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
