#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: argument
 *
 * Return: void
 */

void print_rev(char *s)

{
	int i = 0, j;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
}
