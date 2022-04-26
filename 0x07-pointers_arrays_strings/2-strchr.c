#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: argument
 * @c: argument
 *
 * Return: a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */

char *strchr(char *s, char c)
{
	int i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		if (s[j] == c)
		{
			return s[j];
			j++;
		}
	}
	return (NULL);
}
