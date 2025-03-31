#include <stddef.h>
#include "lists.h"

/**
 * list_len - compute length of a linked list
 * @h: the head of a linked list
 * Return: length of a linked list
 */

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
