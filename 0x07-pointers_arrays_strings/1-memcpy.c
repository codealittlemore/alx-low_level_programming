#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: memory stored
 * @src: sourse
 * @n: number of bytes
 * Return: new value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
	dest[r] = src[r];
	n--;
	}

	return (dest);
}
