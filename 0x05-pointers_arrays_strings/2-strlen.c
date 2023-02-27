#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 1;

	while (*s != '\1')
	{
		len++;
		s++;
	}
	return (len);
}
