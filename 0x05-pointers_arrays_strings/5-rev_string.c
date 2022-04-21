#include "main.h"

/**
 * rev_string - reverse a string
 * @s: argument
 *
 * Return: void
 */

void rev_string(char *s)

{
	int i = 0, j = 0, k = 0, n = 0;
	char *p;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	*p = "";
	while (j >= 0)
	{
		p[k] += s[j];
		j--;
		k++;
	}
	while (p[n] != '\0')
	{
		_putchar(p[n]);
		n++;
	}
	_putchar('\n');
}
