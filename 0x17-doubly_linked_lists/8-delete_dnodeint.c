#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *temp;
    unsigned int count = 0;

    if (!head || !(*head))
        return -1;

    current = *head;

    if (index == 0)
    {
        *head = current->next;
        if (*head)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    while (current && count < index)
    {
        current = current->next;
        count++;
    }

    if (!current)
        return -1;

    if (current->next)
        current->next->prev = current->prev;

    current->prev->next = current->next;

    free(current);

    return 1;
}

