#include "main.h"

/**
 * prints_alphabet_x10 -a function that prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char n;

	for (ten = '0'; ten <= '9'; ten++)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
	}
}

