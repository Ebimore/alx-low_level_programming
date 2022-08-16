#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets nth node of linked list
 * @head: the head of a linked list
 * @index: index of node to return
 * Return: node at nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (index);
			head = head->next;
			count++;
		}
	}
	return (NULL);
}
