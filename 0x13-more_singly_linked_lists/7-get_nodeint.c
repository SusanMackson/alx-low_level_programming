#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: this is the  first node in the linked list
 * @index: this is the function of the index of the node to return
 *
 * Return: this returns the pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *begin = head;

	while (begin && m < index)
	{
		begin = begin->next;
		m++;
	}

	return (begin ? begin : NULL);
}
