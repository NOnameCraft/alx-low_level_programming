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

i =  97;
n = 1;

while(n < 27)

{

putchar(i);

if (n == 102 || n == 113)

{

continue;

}

i++;
n++;

}

return (0);
}
