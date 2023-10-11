#include <math.h>
#include "search_algos.h"

/* compiling math.h with gcc will require `-lm` */
size_t min(size_t a, size_t b);

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return: 1st index containing `value`, otherwise -1,
 * if value is not in array or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (high = 0; high < size && array[high] < value;
	     low = high, high += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       high, array[high]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
