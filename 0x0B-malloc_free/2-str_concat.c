#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: argument
 * @s2: argument
 * Return: a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated 
 */

char *str_concat(char *s1, char *s2)
{

    unsigned int len1, len2, size, i, j;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	size = len1 + len2;

	nstr = malloc((sizeof(char) * size) + 1);
	/*check if malloc was successful */
	if (nstr == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	return (nstr);
}
