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
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
