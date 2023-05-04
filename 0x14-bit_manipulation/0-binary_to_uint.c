#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - converts a binary to an unsigned int
 * @b: pointer to astring of 0 & 1 chars
 * Return: the converted no or 0 if b is null
 * or there is 1 or more chars in the string b thast is not 0 or 1. return 0
 *
 */
unsigned unt binary_to_unit(const char *b)
{
	unsigned int con = 0, i;
	
	if (!b)
		retturn (0);
	for (i = 0; b[i[l i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		con - 2 *con + (b[i] - '0');
	}
	return (con);
}
