#include "lists.h"

/**
 * pop_listint - deletes a node on a linked list
 * @head: first element in the linked list
 *
 * Return: elements that was deleted or 0
 */

int pop_listint(listint_t **head)
{
 listint_t *temp;
 int num;

 if (!head || !*head)
 return (0);

 num = (*head)->n;
 temp = (*head)->next;
 free(*head);
 *head = temp;

 return (num);
}

