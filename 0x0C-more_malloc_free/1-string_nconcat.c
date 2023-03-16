#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat -  concatenates n bytes of a string to another strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: no of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	size_t len1 = (len1 != NULL) ? strlen(len1) : 0;
	size_t len2 = (len2 != NULL) ? strlen(len2) : 0;
	size_t result_len = (n >= len2) ? len1 + len2 : len1 + n;
	char *result = (char *) malloc(result_len + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		memcpy(result, s1, s1_len);
	}
	if (n >= s2_len)
	{
		memcpy(result + s1_len, s2, s2_len);
	}
	else
	{
		memcpy(result + s1_len, s2, n);
	}
	result[result_len] = '\0';
	return (result);
}
