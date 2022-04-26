#include "main.h"

/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 * @src: argument
 * @dest: argument
 * @n: argument
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0, j = 0, k;
	while (src[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	if (k <= n)
	{
		while (j < n)
		{
			dest[j] = src[j];
			j++;
		}
	}
	return (dest);
}
