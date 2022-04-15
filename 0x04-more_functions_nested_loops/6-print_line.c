#include "main.c"

/**
 * print_line - draw a line 
 * @n: number of time _ should be printed
 * Return: void
 */

void print_line(int n)

{
	int i;
	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	
	{
		_putchar('_');
	}
	_putchar('\n');

}

