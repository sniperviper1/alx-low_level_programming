#include "main.h"

/**
* factorial - print a factorial of an integer
* @n: an integer
* Return: fact of n
*/
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
