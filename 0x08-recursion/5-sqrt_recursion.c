#include "main.h"

/**
* sqrt_check - checks the quare root
* @g: squre
* @c: to find square
* Return: -1
*/
int sqrt_check(int g, int c)
{
	if (g * g == c)
	return (g);
	if (g * g < c)
	return (-1);
	return (sqrt_check(g + 1, c));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: integer to find sqrt of
* Return: natural square root or -1
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	return (1);
	return (sqrt_check(n, 1));
}
