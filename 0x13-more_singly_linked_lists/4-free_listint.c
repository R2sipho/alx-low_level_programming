#include "lists.h"

/**
 * free_listint - is the linked list
 * @head: is a listint_t list to be released
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
