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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
		for (; i < n; i++)
			dest[i] = '\0';

	return (dest);
}

