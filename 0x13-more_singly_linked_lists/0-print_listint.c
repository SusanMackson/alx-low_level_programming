#include "lists.h"

/**
 * print_listint - this prints all the elements of the linked list
 * @h: this is the linked list of type listint_t to print
 *
 * Return: this returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		printf("%d\n", h->n);
		digit++;
		h = h->next;
	}

	return (digit);
}
