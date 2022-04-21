#include "main.h"

/**
 *puts_half - prints half of a string
 *@str: argument
 *
 *Return: void
 */

void puts_half(char *str)

{
	int n, i, mid;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		mid = i / 2;
		for (n = mid; n < i; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		mid = (i - 1) / 2;
		for (n = mid + 1; n < i; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}

