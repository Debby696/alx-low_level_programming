#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer  to a string of 0 and 1 chars
 * Return: the converted no or 0 if b is null
 *there is one or more chars in the string b that is not 0 or 1, return 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int con = 0, i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		con = 2 * con + (b[i] - '0');
	}
	return (con);
}

