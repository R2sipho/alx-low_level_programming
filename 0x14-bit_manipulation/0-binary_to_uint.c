#include "main.h"
#include <stdio.h>
/**
 * binary_uint - is a  function that converts  binary numbers to integer.
 * @b: pointers to a string 
 * Return: unsigned int with decimal value 
 */
unsigned int binary_to_uint(const char *b)
{
        int goal;
        unsigned int aya = 0;

        if (!b)
                return (0);
        for (goal = 0; b[goal]; goal++)
        {
                if (b[goal] < '0' || b[goal] > '1')
                        return (0);
                aya = 2 * aya + (b[goal] - '0');
        }
        return (aya);
}
