#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a day and print how many days are
* left in the years, taking leap year into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
if ((year % 100 == 0 || years % 400 == 0) || (year % 4 == 0))
{
if (month > 2 && days >= 60)
{
day++;
}
printf("Days of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining day: %d\n", 365 - day);
}
}
}
}