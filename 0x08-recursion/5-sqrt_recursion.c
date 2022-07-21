#include "main.h"

/**
* _sqrt_recursion - checks the quare root
* @n: integer
* Return: int
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
* _sqrt - _sqaure_recursion
* @n: integer parameter
* @i: second integer
* Return: square
*/
int _sqrt(int n, int i)
{
	if (n < 0)
	return (-1);
	if ((i * i) > n)
	return (-1);
	if (i * i == n)
	return (i);
	return (_sqrt(n, i + 1));
}
