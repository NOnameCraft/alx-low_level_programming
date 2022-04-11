#include <stdio.h>

/**
 * main - entry point
 *
 * Return: value 0 to exit
 */

int main(void)

{

int n;
int i;

for (i = 97, n = 1; n < 27; n++, i++)

{

if (i == 101 || i == 113)

{

continue;

}

putchar(i);

i++;
n++;

}

putchar('\n');

return (0);
}
