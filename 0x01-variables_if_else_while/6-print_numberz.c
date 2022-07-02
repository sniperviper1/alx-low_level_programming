#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print all digit numbers of base 10 starting from 0'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
putchar((num % 19) + '0');
putchar('\n');

return (0);
}
