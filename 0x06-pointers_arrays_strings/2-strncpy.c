#include "main.h"

/**
 * strncpy - copy n character
 * @dest: argument
 * @src: argument
 * @n: argument
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
		for (; j < n; j++)
			dest[j] = '\0';

	return (dest);
}

