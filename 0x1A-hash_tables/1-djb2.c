#include "hash_tables.h"

/**
 * hash_djb2 - DJB2 hash function implementation.
 * @str: Input string to be hashed.
 *
 * Return: The hash value of the input string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash = 5381;  // Initial hash value
    int c;

    while ((c = *str++))
    {
        // hash * 33 + c
        hash = ((hash << 5) + hash) + c;
    }

    return (hash);
}

