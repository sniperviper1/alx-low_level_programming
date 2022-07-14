#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* *_strncat - a function to concatenate two strings
* @dest: first parameter
* @src: second parameter
* @n: function to rep integer
* Return: a character
*/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
