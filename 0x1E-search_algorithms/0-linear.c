#include "search_algos.h"
/**
 * linear_search -  searches for a value in an
 * array of int using linear search algorithm
 * @array: is pointer to the first element
 * @size: is the no of elements in array
 * @value:  value to search for
 * Return: -1 if value is not in array or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t y;

	if (array == NULL)
	{
		return (-1);
	}
	for (y = 0; y < size; y++)
	{
		printf("value checked array[%li] =[%i]\n", y, array[y]);
		if (array[y] == value)
		{
			return (y);
		}
	}
	return (-1);
}
