#include "main.h"

/**
* _isdigit - a function to check a digit 0-9
* @c: input an integer parameter
* Return: 1 if c is a digit, o otherwise
*/
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);
else
return (0);
}
