#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: the head of the linked list
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(hand->str);
	}
	free(head);
	head = NULL;
}
