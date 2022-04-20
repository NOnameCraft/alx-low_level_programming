#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: argument
 *
 * Return: void
 */

void print_rev(char *s)

{
	int i = _strlen(s);
	while (i != 0)
	{
		_putchar(s[i]);
		i++;
	}
}
