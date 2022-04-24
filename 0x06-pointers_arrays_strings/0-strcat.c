#include "main.h"

/**
 * *_strcat - appending two strings
 * @dest: argument
 * @src: argument
 * 
 * Return: appended string
 */

char *_strcat(char *dest, char *src)

{
	int i = 0, j = 0;

        while (src[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (*dest);
}
