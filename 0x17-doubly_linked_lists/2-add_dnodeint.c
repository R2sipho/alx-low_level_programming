#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: Pointer to the head of the list
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = (*head) ? *head : NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (*head);
}

