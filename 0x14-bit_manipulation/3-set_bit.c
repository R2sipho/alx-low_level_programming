#include "main.h"

/**
 * set_bit  is the function that sets the value of a bit to 1 on a given index.
 * @n: number to set
 * @index: index 
* Return: 1 if success
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}

