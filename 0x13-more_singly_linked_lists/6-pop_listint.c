#include "lists.h"

/**
 * pop_listint - the function that  deletes the head node of a linked list
 * @head: this is the  pointer to the first element in the linked list
 *
 * Return: this is the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *begin;
	int current;

	if (!head || !*head)
		return (0);

	current = (*head)->n;
	begin = (*head)->next;
	free(*head);
	*head = begin;

	return (current);
}
