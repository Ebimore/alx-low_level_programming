#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all data of a linked list
 * @head: the head of a linked list
 * Return: summ of all data in a linked list
 */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}
	return (amount);
}
