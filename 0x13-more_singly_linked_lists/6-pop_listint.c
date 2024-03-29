#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes the head node
 * @head: pointer to the first element in the linked list
 *
 * Return: head node data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);
	 num = (*head)->n;
	 temp = (*head)->next;
	 free(*head);
	 *head = temp;
	return (num);
}

