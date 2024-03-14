#include "search_algos.h"

/**
 * linear_search - searches for a value
 *
 * @array: input array
 * @size: size
 * @value: value
 * Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
	int w;

	if (array == NULL)
		return (-1);

	for (w = 0; w < (int)size; w++)
	{
		printf("Value checked array[%u] = [%d]\n", w, array[w]);
		if (value == array[w])
			return (w);
	}
	return (-1);
}
