#include "main.h"

/**
 * print_diagonal - print diagonal with \
 * @n: number of \
 * 
 * Return: void
 */

void print_diagonal(int n)

{
	int i;
	if(i <= 0)
		_putchar('\');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}