#include "lists.h"

/**
 * listint_len - this will return the number of elements in a linked lists
 * @h: this is the linked list of type listint_t to traverse
 *
 * Return: this will return the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		digit++;
		h = h->next;
	}

	return (digit);
}
