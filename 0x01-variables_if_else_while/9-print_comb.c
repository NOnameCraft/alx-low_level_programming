#include <stdio.h>

/**
 * main - entry point
 *
 * Return: value 0 to exit
 */

int main(void)

{

int n;

for (n = 48; n <= 57; n++)

{

putchar(n);

if (n != 57)

{

putchar(',');
putchar(' ');

}

}

putchar('\n');

return (0);

}
