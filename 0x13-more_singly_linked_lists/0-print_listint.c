#include "lists.h"

/**
 * print_listint - will prints all  elements of a linked list
 * @h: linked is the list of listint_t to print
 *
 * Return: the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
