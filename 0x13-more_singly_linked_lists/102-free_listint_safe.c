#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - prints a list
 * @h: head of linked list to search
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	listint_t *head, *temp;
	long diff;

	if (!h)
		return (0);
	head = *h;
	*h = NULL;
	while (head)
	{
		c++;
		diff = head->next - head;
		temp = head;
		free(temp);
		if (diff >= 0)
			break;
		head = head->next;
	}
	return (c);
}
