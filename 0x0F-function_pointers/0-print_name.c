#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name using pointer to a function
 * @name: string to be added
 * @f: pointers to function
 * Return: 0
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
