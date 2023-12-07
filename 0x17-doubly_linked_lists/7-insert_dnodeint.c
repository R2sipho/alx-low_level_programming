#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in the list
 * @h: Pointer to the head of the list
 * @idx: Index where the new node should be added
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int count = 0;

    if (!h)
        return NULL;

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return NULL;

    new_node->n = n;

    if (idx == 0)
    {
        new_node->prev = NULL;
        new_node->next = *h;
        if (*h)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    current = *h;
    while (current && count < idx - 1)
    {
        current = current->next;
        count++;
    }

    if (!current)
    {
        free(new_node);
        return NULL;
    }

    new_node->prev = current;
    new_node->next = current->next;

    if (current->next)
        current->next->prev = new_node;

    current->next = new_node;

    return new_node;
}

