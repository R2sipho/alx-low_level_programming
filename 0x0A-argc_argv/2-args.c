#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments  receives
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

