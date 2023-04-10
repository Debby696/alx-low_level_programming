#include "main.h"
/**
 * flip_bits - returns the number of bits that need to be flipped to change
 * @n: first unsigned long integer
 * @m: second unsigned long integer
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = xor >> i;
		if (current & 1)
			count++;
	}
	return (count);
}


