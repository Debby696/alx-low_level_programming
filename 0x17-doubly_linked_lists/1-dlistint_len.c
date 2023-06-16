#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len -  returns the number of elements in a doubliy linked list
 * @h: pointer to the dlistint_t list.
 *
 * Return: number of elements in h
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		h = h->next;
	}
	return (s);
}
