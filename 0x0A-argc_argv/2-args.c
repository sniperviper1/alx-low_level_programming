#include <stdio.h>
#include "main.h"

/**
* main - function to print all argument it recieve
* @argc: first parameter
* @argv: array pointer
* Return: Always 0 0n success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv[i]);
	}
	return (0);
}
