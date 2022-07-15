#include "main.h"

/**
* _strcmp - a function to compare two strings
* @s1: first string
* @s2: second string
* Return: 0 if the string1 and string2 are not same
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, op = 0;

while (op == 0)
{
if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
break;
op = *(s1 + i) - *(s2 + i);
i++;
}
return (op);
}
