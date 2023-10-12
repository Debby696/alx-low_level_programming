#include "search_algos.h"

/**
 * print_array - this prints an array of integers
 * @array: is the pointer to the start of the array
 * @size: is the size of the array
 *
 * Return: nothing
 */
void print_array(int *array, int size)
{
	int i;

	if (array == NULL || size == 0)
		return;

	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}

	printf("\n");
}

/**
 * recursive_binary_search - this searches for a value in a sorted array
 * recursively with binary search method
 * @array: is the pointer to array to be searched
 * @low: is sub-array start point
 * @high: is sub-array end point
 * @value: is the value to be searched for
 *
 * Return: first index value found at or -1 if not present
 */
int recursive_binary_search(int *array, int low, int high, int value)
{
	int mid;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;

	print_array(&array[low], high - low + 1);

	if (array[mid] == value)
	{
		if (array[mid - 1] != value)
			return (mid);
	}

	if (array[mid] < value)
		return (recursive_binary_search(array, mid + 1, high, value));
	else
		return (recursive_binary_search(array, low, mid, value));
}

/**
 * advanced_binary - this implement binary search on sorted array ensuring
 * value found index is first index, using recursive approach
 * @array: is the array to be searched
 * @size: is the  size of the array (number of elements)
 * @value: is the value to be searched for
 *
 * Return: first index value found at or -1 if not present or array is null
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary_search(array, 0, size - 1, value));
}
