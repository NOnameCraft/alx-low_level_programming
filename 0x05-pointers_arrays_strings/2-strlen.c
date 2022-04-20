#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of s string
 * @s: argument
 *
 * Return: an integer represent the length of the argument
 */

int _strlen(char *s)

{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

