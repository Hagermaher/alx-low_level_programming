nclude "search_algos.h"

/**
 * recursive_search - searches for a value
 *
 * @array: input array
 * @size: size of the array
 * @value: value
 * Return: index
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t w;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (w = 0; w < size; w++)
		printf("%s %d", (w == 0) ? ":" : ",", array[w]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
