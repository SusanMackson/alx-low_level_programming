#include "lists.h"

/**
 * free_listint - this will free a linked list
 * @head: this is the listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *begin;

	while (head)
	{
		begin = head->next;
		free(head);
		head = begin;
	}
}
