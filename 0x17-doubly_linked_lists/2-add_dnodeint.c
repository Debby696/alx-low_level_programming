#include <stdlib.h>
#include "lists.h"
/**
 * *add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to the dlistint_t list.
 * @n: new string to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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

