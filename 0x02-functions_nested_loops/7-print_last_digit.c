#include "main.h"

/**
 * print_last_digit - entry point 
 *
 * @n: input
 * Return: last digit of a number
 */

int print_last_digit(int n)

{

int x;

if (n < 0)

{

x = (n % 10) * -1;

}

x = n % 10;

_putchar('0' + x);
return (x);

}
