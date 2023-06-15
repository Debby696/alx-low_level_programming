#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a doubly linked list.
 * @head: first node in the doubly linked list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
