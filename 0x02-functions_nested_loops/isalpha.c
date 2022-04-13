#include "main.h"

/**
 * _isalpha - entry point
 * *@c: input
 *
 * Return: 1 if c is letter 0 otherwise
 */

int _isalpha(int c)

{

int i;

if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))

{

return (1);

}

else

return (0);

}
