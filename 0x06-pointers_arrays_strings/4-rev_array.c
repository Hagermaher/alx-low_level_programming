#include "main.h"
/**
 * reverse_array - reverse array of integars
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = o; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}