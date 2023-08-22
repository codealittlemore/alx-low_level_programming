#include "main.h"

/**
 * _strcpy - copies
 * @dest: char type
 * @src: char type
 * Description: place
 * Return: points tp
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do{
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
