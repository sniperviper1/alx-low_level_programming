#include "main.h"
#include <stdio.h>
#include <string.h>




/**
* *_strncpy - a function to copy strings
* @dest: first parameter
* @src: second parameter
* @n: 3rd parameter
* Return: a character
*/
char *_strncpy(char *dest, char *src, int n)
{

	strncpy(dest, src, n);

	return (dest);

}
