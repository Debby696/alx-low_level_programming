#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	len = 0;
       	int i = 0; unsigned long int current = n;

	while (n >= 2)
	{
		current = current  >> 1;
		len++;
	}
	for (i = (int)len; i >= 0; i--)
	{
		_putchar(n & (1u << i) ? '0' : '1');
	}
}
		
		
