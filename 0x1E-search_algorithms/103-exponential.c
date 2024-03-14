#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array
  * @array: A pointer to the first element of the array to search.
  * @left: The starting index
  * @right: The ending index
  * @value: The value
  *
  * Return: If the value is not present or the array is NULL, -1.
  *
  * Description: Prints the [sub]arra
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t w;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (w = left; w < right; w++)
			printf("%d, ", array[w]);
		printf("%d\n", array[w]);

		w = left + (right - left) / 2;
		if (array[w] == value)
			return (w);
		if (array[w] > value)
			right = w - 1;
		else
			left = w + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  * @array: A pointer
  * @size: The number
  * @value: The value
  *
  * Return: If the value is not present or the array is NULL, -1.
  *
  * Description: Prints a value
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
