#include <stdio.h>

/**
 * main - entry point
 *
 * Return: value 0 to exit
 */

int main(void)

{

int i, j;

for (i = 48; i < 57; i++)

{

for (j = i + 1; j <= 57; j++)

{
	
putchar(i);
putchar(j);
putchar(',');
putchar(' ');

}

}

putchar('\n');

return (0);

}

