#include "lists.h"

/**
 * add_nodeint - adds a new node in a linked list
 * @n: data wil be insert in a new node
 * @head: pointers to the first node
 * Return: node and NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
