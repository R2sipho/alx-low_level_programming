#include "main.h"

/**
 * swap_int - is a function that swaps the values of to integers.
 * @a: this is the firt value
 * @b: this is the second value
 *
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
