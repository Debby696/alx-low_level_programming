#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = n - 1; i >= 0; i--)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}


