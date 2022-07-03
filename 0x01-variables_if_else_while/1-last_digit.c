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
printf("Last digit of %d is n and is greater than ", n);
if (n > 5)
{
printf("greater than 5");
}
if  (n == 0)
{
printf("0");
}
if (n < 0 && n != 0)
{
printf("less than 6 not 0");
}

printf("\n");

return (0);
}
