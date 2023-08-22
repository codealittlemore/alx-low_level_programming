#include "main.h"

/**
 * _strlen - checks length
 * @s: string
 * Return: returns length
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
	string_length++;
	return (string_length);
}
