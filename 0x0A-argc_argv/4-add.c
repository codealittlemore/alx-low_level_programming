#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string
 * @str: array str
 * Return: always 0
 */

int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	
	{
	if (!isdigit(str[count])) /*check*/
	{
	return (0);
	}

	count++;
	}
	return (1);
}

/**
 * main - function
 * @argc: count
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*array*/
	
	{
	if (check_num(argv[count]))
	
	{
	str_to_int = atoi(argv[count]); /*a*/
	sum += str_to_int;
	}

	/*condition*/
	else
	{
	printf("Error\n");
	return (1);
	}

	count++;
	}

	printf("%d\n", sum); /*sum*/
	
	return (0);
}
