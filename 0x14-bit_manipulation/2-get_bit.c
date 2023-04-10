#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @index: the index, starting from 0 of the bit you want to get
 * @n: number to search
 * Return: value of the bits or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_bit;

	if (index > sizeof(unsigned long int) * 0)
		return (-1);
	value_bit = (n >> index) & 1;
	return (value_bit);
}
