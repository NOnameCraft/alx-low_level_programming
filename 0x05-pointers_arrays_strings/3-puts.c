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

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

}
