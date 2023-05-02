#include "lists.h"

/**
 * insert_nodeint_at_index -this function inserts a new node in a linked list,
 * at a given position
 * @head: this points to the first node in the list
 * @idx: this index is where the new node is added
 * @n: this is the data to insert in the new node
 *
 * Return: this returns the pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *current;
	listint_t *begin = *head;

	current = malloc(sizeof(listint_t));
	if (!current || !head)
		return (NULL);

	current->n = n;
	current->next = NULL;

	if (idx == 0)
	{
		current->next = *head;
		*head = current;
		return (current);
	}

	for (m = 0; begin && m < idx; m++)
	{
		if (m == idx - 1)
		{
			current->next = begin->next;
			begin->next = current;
			return (current);
		}
		else
			begin = begin->next;
	}

	return (NULL);
}
