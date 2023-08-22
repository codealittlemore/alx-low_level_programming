#include "main.h"

/**
 * swap_int - swap integers
 * @a: swaps
 * @b: swaps
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
