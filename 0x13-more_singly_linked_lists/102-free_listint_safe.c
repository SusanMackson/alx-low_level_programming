#include "lists.h"

/**
 * free_listint_safe - this is the function that frees a linked list
 * @h: a function that calls pointer to the first node in the linked list
 *
 * Return: this returns a number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t leng = 0;
	int diffe;
	listint_t *tempe;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diffe = *h - (*h)->next;
		if (diffe > 0)
		{
			tempe = (*h)->next;
			free(*h);
			*h = tempe;
			leng++;
		}
		else
		{
			free(*h);
			*h = NULL;
			leng++;
			break;
		}
	}

	*h = NULL;

	return (leng);
}
