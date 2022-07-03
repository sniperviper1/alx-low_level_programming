#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'assign a random number to the variable n each time
 * it is executed and print the last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("%d is greater\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
if (n < 0 && n != 0)
{
printf("%d negative\n", n);
}

printf("\n");

return (0);
}
