#include <stdio.h>
#include "main.h"

/**
 * main -  function
 * @argc: array
 * @argv: array
 * Return: zero
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
