#include "main.h"

/**
 * print_sign: entry point
 * *@c: input
 *
 * Return: value 1 if n is gt 0 , 0 if n eq 0 and -1 if n is lt 0
 */

int print_sign(int c)

{

if (c > 0)

{

	_putchar('+');
	_putchar(',');
	_putchar(' ');
	return (1);

}

else if (c == 0)

{

_putchar('0');
_putchar(',');
_putchar(' ');
return (0);

}

else

{

_putchar('-');
_putchar(',');
_putchar(' ');
return (-1);

}

}
