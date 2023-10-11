#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: is  pointer to the forst element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: 1st index of the value,else -1 if value isn't in array/array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	int low = 0;
	int high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));

		if (pos > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}
		else
		{
			if (array[pos] > value)
				high = pos - 1;
			else
				low = pos + 1;
		}
	}

	return (-1);
}

