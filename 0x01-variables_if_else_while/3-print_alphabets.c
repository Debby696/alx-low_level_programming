#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints alpha in lower and upper case
 *
 * Return Always 0
 */

int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
