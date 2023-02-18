#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints al  strings from 0 to 9
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
