#include "lists.h"

/**
 * single_connector - Connects two doubly linked list nodes
 * @f_name: The first node
 * @s_name: The second node
 */
void single_connector(dlistint_t *f_name, dlistint_t *s_name)
{
	f_name->next = s_name;
	s_name->prev = f_name;
}

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: The head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *iterator;

	count = 0;
	iterator = h;

	while (iterator)
	{
		count++;
		printf("%d\n", iterator->n);
		iterator = iterator->next;
	}

	return (count);
}

