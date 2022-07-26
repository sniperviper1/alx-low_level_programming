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
	printf("%d\n", argc - 1);
	printf("%s\n", *argv);
	return (0);
}
