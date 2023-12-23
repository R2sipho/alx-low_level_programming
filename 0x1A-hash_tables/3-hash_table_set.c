#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates a key/value pair in a hash table.
 * @ht: The hash table to modify.
 * @key: The key, a string.
 * @value: The value corresponding to the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node, *current;
    char *value_copy;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    value_copy = strdup(value);
    if (value_copy == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);

    for (current = ht->array[index]; current; current = current->next)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = value_copy;
            free(value_copy); // Free if key already exists
            return (1);
        }
    }

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        free(value_copy);
        return (0);
    }

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        free(value_copy);
        return (0);
    }

    new_node->value = value_copy;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}

