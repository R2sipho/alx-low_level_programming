#include "main.h"

/**
 * puts2 - function that only print one character out, 
 * starting with the first character, followed by a new line.
 * @str: string input
 * Return: print
 *
 */

void puts2(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(s[a]);
		}
	}
	_putchar('\n');
}
