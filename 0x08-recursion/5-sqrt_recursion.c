#include "main.h"

/**
 * _sqrt_recursion - the natural square root of a number
 * @n: argument
 * Return: a natural square root or -1
 */

int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));

	}
}
/**
  *helperFunction - checks if sqrt of number exists
  *@num: number.
  *@pSqrt: poissible sqrt of number.
  *
  *Return: sqrt of number ot -1 for error.
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}

