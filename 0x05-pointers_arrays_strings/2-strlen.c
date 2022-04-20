#include "main.h"
#include <stdio.h>

/**
 * int_strlen - length of s string
 * @s: argument
 *
 * Return: an integer represent the length of the argument
 */

int int_strlen(char *s)

{
	int i;

        i = 0;
	while(s[i] != '\0')
	
	{
		i++;
	}

	return (i);
}

