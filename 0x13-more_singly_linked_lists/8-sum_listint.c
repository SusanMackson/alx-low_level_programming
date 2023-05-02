#include "lists.h"

/**
 * sum_listint -this function  calculates the sum of all the data
 * in a listint_t list
 * @head: this is the first node in the linked list
 *
 * Return: this is the resulting sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *begin = head;

	while (begin)
	{
		add += begin->n;
		begin = begin->next;
	}

	return (add);
}
