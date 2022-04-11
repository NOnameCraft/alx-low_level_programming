#include <stdio.h>

/**
 * main - entry point 
 *
 * Return: value 0 to exit
 */

int main(void)

{

int i;
int n;
int j;
int m;

for (i = 97, n = 1; n < 27; i++, n++)

{

putchar(i);

}

for (j = 65, m = 1; m < 27; m++, j++)

{

putchar(j);

}

putchar('\n');

return (0);
}
