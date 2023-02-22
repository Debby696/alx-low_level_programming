#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: The character to be checked
 * Return: 1 if letter is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
		return (1);
	else
		return (0);
}
