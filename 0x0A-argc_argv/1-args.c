#include <stdio.h>
#include "main.h"

/**
* main - a function to print an integer
* @argc: first parameter
* @argv: an array pointer
* Return: Always 0 on success
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
