#include "lists.h"

/**
 * find_listint_loop - this function willfinds the loop in a linked list
 * @head: this is the linked list to search for
 *
 * Return: this is the address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *behind = head;
	listint_t *ahead = head;

	if (!head)
		return (NULL);

	while (behind && ahead && ahead->next)
	{
		ahead = ahead->next->next;
		behind = behind->next;
		if (ahead == behind)
		{
			behind = head;
			while (behind != ahead)
			{
				behind = behind->next;
				ahead = ahead->next;
			}
			return (ahead);
		}
	}

	return (NULL);
}
