#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: the head node of a linked list
 * Return: the head node's data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}
	return (n);
}
