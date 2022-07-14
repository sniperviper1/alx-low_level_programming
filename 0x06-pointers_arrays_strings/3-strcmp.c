#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcmp - a function to compare two strings
* @s1: first parameter
* @s2: second parameter
* Return: an integer
*/
int _strcmp(char *s1, char *s2)
{
printf("%d\n", strcmp(s1, s2));
printf("%d\n", strcmp(s2, s1));
printf("%d\n", strcmp(s1, s1));
return (0);
}
