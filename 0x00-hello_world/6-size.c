#include <stdio.h>

/**
 * main-Entry point
 *
 * Reutrn: Always 0 (Success)
 */
int main(void)
{
printf("sizeof char is = %i byte\n", sizeof(char));
printf("sizeof signed char is = %i byte\n", sizeof(signed char));
printf("sizeof unsigned char is = %i byte\n\n\n", sizeof(unsigned char));
printf("sizeof int is = %i byte\n", sizeof(int));
printf("sizeof signed is = %i byte\n", sizeof(signed int));
printf("sizeof unsigned is = %i byte\n\n\n", sizeof(unsigned int));
printf("sizeof long int is = %i byte\n", sizeof(long int));
printf("sizeof signed long int = %i byte\n", sizeof(signed long int));
printf("sizeof unsiged long int = %i byte\n\n\n", sizeof(unsigned long int));
printf("size of float is = %i byte\n", sizeof(float));
printf("sizeof doible is = %i byte\n", sizeof(double));
printf("sizeof long double is = %i byte\n\n\n", sizeof(long double));
return (0);
