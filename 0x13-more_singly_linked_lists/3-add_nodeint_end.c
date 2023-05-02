#include "lists.h"

/**
 * add_nodeint_end - this will add a node at the end of a linked list
 * @head: this points to the first element in the list
 * @n: this is the data to insert in the new element
 *
 * Return: this returns the pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *begin = *head;

	current = malloc(sizeof(listint_t));
	if (!current)
		return (NULL);

	current->n = n;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (begin->next)
		begin = begin->next;

	begin->next = current;

	return (current);
}
