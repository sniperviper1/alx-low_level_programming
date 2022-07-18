#include "main.h"
#include <string.h>

/**
* *_memset - a memory set function
* @s: string
* @b: charater
* @n: an integer
* Return: a string
*/
char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
