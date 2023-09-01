#include <stdio.h>
#include "main.h"

/**
 * main - function
 * @argc: number
 * @argv: arguments
 * Return: new value
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
