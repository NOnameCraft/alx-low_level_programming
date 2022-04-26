#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: argument
 * @s2: pointer to second string
 *
 * Return: value less than 0 if string is less than the other value greater than 0 if string is greater than the other0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i, cmp;
	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	cmp = s1[i] - s2[i];
	return (cmp);
}
