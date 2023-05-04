#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Tthe character to print
 *
 * Return: On success 1
 * On error: -1, & errno is set appropriately.
 */
int _putchar(char C)
{
	return (write(1, &c, 1));
}
