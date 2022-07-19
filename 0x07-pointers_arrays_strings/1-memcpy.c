#include "main.h"
#include <string.h>

/**
* *_memcpy - function to copy bytes from memory
* @dest: pointer
* @src: memory
* @n: string
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n + 1);
	return (dest);
}
