#include "main.h"
/**
 * factorial - returns the factorial of a given no
 * @n: number to return the factorial from
 * Return: factorial of n
 */
int factorial(int n)
{
	int n = 0
		if (n < 0)
		{
			return (-1);
		}
		else if (n == 0)
		{
			return (1);
		}
	return (n * factorial(n - 1));
}
