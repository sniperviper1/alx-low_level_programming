#include <stdio.h>

/**
* print_array - Prints n elements of an array of integers, followed by a new line
* @a: the array
* @n: is the number of elements of the array to be printed
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; n++)
printf("%d%s", a[i], i != n - 1 ? ", " : "");
printf("\n");
}
