#include "main.h"

/**
* _strcmp - a function to compare two strings
* @s1: first parameter
* @s2: second parameter
* Return: an integer
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;
		while (op == 0)
		{
			if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
					break;
					op = *(s1 + 1) - *(s2 + 1);
					i++;
		}
return (op);
}
