#include "main.h"

/**
* print_alphabet_10x -> prints the lowercase aplphabet 10x
*/

void print_alphabet_10x(void)
{
int j;
int x;

for (x = 0; x <= 10; x++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
