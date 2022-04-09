#include <stdio.h>

/**
 * main - entry point
 * @void: no arguments
 * Description: the program starts and ends here
 * Return: value 0 to exit
 */

int main(void)

{

int a;
char b;
long int c;
float d;
long long int e;

printf("Size of a char: %lu byte (s)\n",(unsigned long)sizeof(b));
printf("Size of an int: %lu byte (s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte (s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte (s)\n", (unsigned long)sizeof(e));
printf("Size of float: %lu byte (s)\n", (unsigned long)sizeof(d));
return (0);

}
