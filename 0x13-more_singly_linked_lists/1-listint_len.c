#include "lists.h"

/**
 * listint_len - elements in a linked lists
 * @h: linked listint_t to traverse
 *
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
 size_t num = 0;

 while (h)
 {
 num++;
 h = h->next;
 }

 return (num);
}

