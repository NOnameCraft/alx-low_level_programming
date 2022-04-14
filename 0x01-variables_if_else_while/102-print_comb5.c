#include <stdio.h>

/**
 * main - entry point
 *
 * Return: value 0 to exit
 */

int main(void)

{

int i, j, k;

for (i = 48; i <= 57; i++)

{

for (j = 48; j <= 57; j++)

{

for (k = 1; k <= 10; k++)

{

putchar(i);
putchar(i);
putchar(',');
putchar(' ');

if (i != 57 && j != 57)

{

putchar(i);
putchar(j);

}

}

}

putchar('\n');

}

return (0);

}
