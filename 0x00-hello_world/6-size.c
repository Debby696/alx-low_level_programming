#include <stdio.h>
/**
 * main -print out sizes of data types in c
 * Return: 0
 */
int main(void)
{
	char a;
	int n;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int; %lu  byte(s)\n", (unsignedlong)sizeof(c));
	printf("Size of a long long int; %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}
