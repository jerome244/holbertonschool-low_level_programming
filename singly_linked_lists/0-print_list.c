#include <stdio.h>
#include "lists.h"

/**
 * print_list - print each string of a linked list
 * @h: the head of a linked list
 * Return: the length of the linked list
 */

size_t print_list(const list_t *h)
{
	size_t length;

	while (h)
	{
		printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		lenght++;
	}
	return (length);
}
