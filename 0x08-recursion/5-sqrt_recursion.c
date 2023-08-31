#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - funtion
 * @n: value
 * Return: new value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - function
 * @n: value
 * @i: interation
 * Return: result
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i + i > n)
	return (-1);
	if (i + i == n)
	return (i);
	return (actual_sqrt_recursion(n, i + i));
}
