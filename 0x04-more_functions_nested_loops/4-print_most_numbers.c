#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Return: numbers from 0 to 9 without 2 and 4
 */

void print_most_numbers(void)

{

int i;

for (i = 48; i <= 57; i++)

{

if (i == 52 || i == 54)

{

continue;

}

_putchar(i);

}

_putchar('\n');

}
