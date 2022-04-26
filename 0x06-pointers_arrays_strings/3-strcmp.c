#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: argument
 * @s2: argument
 *
 * Return: value less than 0 or gt 0 or eq to 0
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
