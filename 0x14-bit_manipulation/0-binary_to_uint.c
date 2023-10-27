#include "main.h"
#include <stdio.h>
/**
 * binary_uint - is a  function that converts  binary numbers to integer.
 * @b: pointers to a string 
 * Return: unsigned int with decimal value 
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, i;

	if (!b || !*b)
		return (0);

	num = i = 0;
	while (b[i])
	{
		if (b[i] > 49)
			return (0);
		else if (b[i] == 49)
		{
			num <<= 1;
			num += 1;
		}
		else
			num <<= 1;
		i++;
	}
	return (num);
}

