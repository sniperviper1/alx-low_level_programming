#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* reverse_array - a function to reverse an array
* @a: array of integer
* @n: a number of elements to swap
* Return: 0
*/
void reverse_array(int *a, int n)
{
int *p, i, aux, k;

p = a;
for (i = 0; i < n; i++)
p++;
for (k = 0; k < n / 2; k++)
{
aux = a[k];
a[k] = *p;
*p = aux;
p--;
}
}
