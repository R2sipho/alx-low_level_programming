#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - is the function that set index to 0
 * @index: index
 * Return: 1 or -1 if the is an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

