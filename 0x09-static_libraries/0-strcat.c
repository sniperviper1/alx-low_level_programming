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

	int len = 0, i;



	while (dest[len])

		len++;



	for (i = 0; src[i] != '\0'; i++)

	{

		dest[len] = src[i];

		len += 1;

	}

	dest[len] = '\0';



	return (dest);

}
