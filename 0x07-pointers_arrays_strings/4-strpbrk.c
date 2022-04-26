#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: argument
 * @accept: argument
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, k = 0, m = 0;
	char *x = NULL;

	while(s[i] != '\0' && accept[j] != '\0')
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				x[m] = s[i];
				m++;
			}
		}
		i++;
		j++;
	}
	return (x);
}
