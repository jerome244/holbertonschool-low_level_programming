#include "lists.h"

/**
 * add_dnodeint - prepends a node to a linked list
 * @head: pointer to the head of a linked list
 * @n: integer the new node should contain
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (head && *head)
	{
		end = *head;
		while (end->next)
			end = end->next;
		end->next = new;
		new->prev = end;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}	
	return (new);
}
