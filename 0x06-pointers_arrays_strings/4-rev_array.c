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
int half = n / 2;
int left, right, i;

n -= 1;

for (i = 0; i < half; i++)
{
left = a[n - i];
right = a[i];
a[i] = left;
a[n - i] = right;
}
}
