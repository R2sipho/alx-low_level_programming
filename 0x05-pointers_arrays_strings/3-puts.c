#include "main.h"

/**
 * _puts - it write function that prints a string, followed by a niw line on stdout.
 * @: is my string input
 */ 

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
