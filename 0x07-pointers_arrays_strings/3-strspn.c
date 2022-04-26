#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: argument
 * @accept: argument
 *
 * Return: the number of bytes in the initial segment of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, k = 0, x = 0;
	
	while(s[i] != '\0' && accept[j] != '\0')
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				x++;
			}
		}
		i++;
		j++;
	}
	return (x);
}
