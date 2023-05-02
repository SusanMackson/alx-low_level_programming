#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - this function counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: this is a pointer to the head of the listint_t to check.
 *
 * Return: returns If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *crab, *horse;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	crab = head->next;
	horse = (head->next)->next;

	while (horse)
	{
		if (crab == horse)
		{
			crab = head;
			while (crab != horse)
			{
				nodes++;
				crab = crab->next;
				horse = horse->next;
			}

			crab = crab->next;
			while (crab != horse)
			{
				nodes++;
				crab = crab->next;
			}

			return (nodes);
		}

		crab = crab->next;
		horse = (horse->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - this function prints a listint_t list safely.
 * @head: this is a pointer to the head of the listint_t list.
 *
 * Return: This returns the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, initial = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (initial = 0; initial < nodes; initial++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
