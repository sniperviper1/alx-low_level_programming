#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: 'Print alphabet in lowercase'
 *
 * Return: Always 0 (Success)i
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');

return (0);
}
