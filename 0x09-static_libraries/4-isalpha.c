#include "main.h"



/**
* _isalpha - check for alphabet letters
* @c: a character to be checked on
* Return: return 0 or 1 depending on condition
*/
int _isalpha(int c)

{

	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
