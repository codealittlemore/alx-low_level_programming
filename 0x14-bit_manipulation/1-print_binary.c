#include "main.h"

/**
 * print_binary - prints the binary 
 * @n: number 
 */
void print_binary(unsigned long int n)
{
	int i;
	int count = 0;

	for (i = 63; i >= 0; i--)
	{
		unsigned long int current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}

	if (!count)
	{
		_putchar('0');
	}
}

