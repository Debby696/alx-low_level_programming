#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - calculates the sum of all data of a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: sum of all the data in the node or NULL If empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}

