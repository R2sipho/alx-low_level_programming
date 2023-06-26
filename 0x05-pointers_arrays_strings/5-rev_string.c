#include "main.h"
#include <stdio.h>
/**
 * rev_string - is a fuction print a string reverser
 *@s: it is the pointer that point to a string
 *Return: string in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
