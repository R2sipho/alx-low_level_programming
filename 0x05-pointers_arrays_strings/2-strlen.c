#include "main.h"

/**
 * _strlen - is a function that returns the length of string
 * @s: this is the input string
 * Return: is the legmth of string
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
