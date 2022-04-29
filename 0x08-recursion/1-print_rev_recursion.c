#include "main.h"

/**
 * _print_rev_recursion - that prints a string in reverse
 * @s: argument
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
        _putchar(*s);
		_print_rev_recursion(s + 1);
	}
}