#include "main.h"

/**
 * _strncat - Return a pointer to the resulting string dest
 * @dest: argument
 * @src: argument
 * @n: argument
 *
 * Return: concatanated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != src[n])
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = src[n];
	return (dest);
}
