#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the array.
 *
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table;
    unsigned long int i;

    if (size == 0)
        return (NULL);

    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
        return (NULL);

    new_table->array = malloc(sizeof(hash_node_t *) * size);
    if (new_table->array == NULL)
    {
        free(new_table);
        return (NULL);
    }

    new_table->size = size;

    for (i = 0; i < size; i++)
        new_table->array[i] = NULL;

    return (new_table);
}

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Hash table to be deleted.
 *
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *current, *temp;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current != NULL)
        {
            temp = current->next;
            free(current->key);
            free(current->value);
            free(current);
            current = temp;
        }
    }

    free(ht->array);
    free(ht);
}

