#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* *_strcat - a functiin to conccatenate two strings
* @dest: pointer to destion array
* @src: function tgat copies the string pointed
* Return: dest as a pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
size_t dest_len = strlen(dest);
size_t i;
size_t n;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';

return (dest);
}
