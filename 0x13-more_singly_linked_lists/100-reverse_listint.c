#include "lists.h"

/**
 * reverse_listint - this function reverses a linked list
 * @head: this is the pointer to the first node in the list
 *
 * Return: this returns pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *after = NULL;

	while (*head)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}

	*head = before;

	return (*head);
}
