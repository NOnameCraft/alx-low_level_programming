#include "main.h"
#include <stdio.h>

/**
 *_atoi - converts a string to an integer
 *@s: argument
 *
 *Return: integer gotten
 */

int _atoi(char *s)

{
	int i, ind2;
	unsigned int res;
	int sign = 1;
	char c;

	i = 0;
	res = 0;
	while (*(s + i) != '\0')
	{
		c = *(s + i);
		if (c == '-')
		{
			sign *= -1;
		}
		if (c >= '0' && c <= '9')
		{
			ind2 = i;
			while (*(s + ind2) > 47 && *(s + ind2) < 58)
			{
				res = (res * 10) + *(s + ind2) - '0';
				ind2++;
			}
			break;
		}
		i++;
	}
	if (sign < 0)
		res *= sign;
	return (res);
}

