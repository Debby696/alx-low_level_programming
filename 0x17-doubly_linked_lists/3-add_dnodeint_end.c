#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list.
 * @head: Pointer to a pointer to the head of the list
 * @n: string to put in the new node.
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new;
		new->next = *head;
	}
	else
	{
		new->next = NULL;
	}
	*head = new;

	return (new);
}
