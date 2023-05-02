#include "lists.h"

/**
 * delete_nodeint_at_index - this deletes a node in a linked list
 * at a certain index
 * @head: this points to the first element in the list
 * @index:this is the index of the node to delete
 *
 * Return: this always returns 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *begin = *head;
	listint_t *current = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(begin);
		return (1);
	}

	while (m < index - 1)
	{
		if (!begin || !(begin->next))
			return (-1);
		begin = begin->next;
		m++;
	}


	current = begin->next;
	begin->next = current->next;
	free(current);

	return (1);
}
