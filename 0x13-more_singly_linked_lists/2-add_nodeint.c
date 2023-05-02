#include "lists.h"

/**
 * add_nodeint - this will add a new node at the beginning of a linked list
 * @head: this points to the first node in the list
 * @n: this is the  data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (!current)
		return (NULL);

	current->n = n;
	current->next = *head;
	*head = current;

	return (current);
}
