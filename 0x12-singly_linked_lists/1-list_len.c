#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - shows the number of elements in a list
 * @h: linked list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
