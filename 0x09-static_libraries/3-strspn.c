#include "main.h"



/**
* _strspn - get the length of prifix
* @s: initial segment
* @accept: accept bytes
* Return: the number of byte accepted
*/

unsigned int _strspn(char *s, char *accept)

{

	unsigned int i, j, bool;

	for (j = 0; *(s + i) != '\0'; i++)

	{

		bool = 1;

	for (j = 0; *(accept + j) != '\0'; j++)

		{

	if (*(s + i) == *(accept + j))
		bool = 0;
	break;
		}

	if (bool == 1)
	break;
	}

	return (i);
}
