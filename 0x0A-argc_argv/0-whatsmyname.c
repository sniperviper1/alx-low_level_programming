#include <stdio.h>
#include "main.h"

/**
* main - a function to print it name
* @argc: first parameter
* @argv: an array
* Return: Always 0 on success
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
