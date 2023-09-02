#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed to the program
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: Always 0 
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

