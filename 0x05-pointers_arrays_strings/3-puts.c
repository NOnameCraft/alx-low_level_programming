#include "main.h"

/**
 * _puts - print a string ending by a new line
 * @str: argument
 *
 * Return: void
 */

void _puts(char *str)

{
	int i = 0;
	int x = 0;

	while (str[i] != '\0')
	{
		x = str[i];
		_putchar(x);
		i++;
	}

	_putchar('\n');

}
