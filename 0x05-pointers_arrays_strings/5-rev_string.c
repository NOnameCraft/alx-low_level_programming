#include "main.h"

/**
 * rev_string - reverse a string
 * @s: argument
 *
 * Return: void
 */

void rev_string(char *s)

{
	int i = 0, j = 0, k = 0;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	while (k < j)
	{
		tmp = s[k];
		s[k] = s[j];
		s[j] = tmp;
		j--;
		k++;
	}
}
