#include "lists.h"

/**
 * dlistint_len - Counts the number of nodes in a doubly linked list
 * @h: The head of the list
 *
 * Return: Number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return count;
}

