#include "lists.h"

/**
 * free_listint2 - this frees a linked list
 * @head: the pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *begin;

	if (head == NULL)
		return;

	while (*head)
	{
		begin = (*head)->next;
		free(*head);
		*head = begin;
	}

	*head = NULL;
}
