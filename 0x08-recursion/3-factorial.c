#include "main.h"

/**
 * factorial - function
 * @n: value
 * Return: new value
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
