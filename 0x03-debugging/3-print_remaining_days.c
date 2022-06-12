#include <stdio.h>
/**
 * print_remaining_days - prints how many days are left in a year
 * takes leap yeras into consideration
 * @year: year
 * @month: month in numerals
 * @day: day
 * Return: void
 */
void print_remaining_days(int year, int month, int day)
{
	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{
		if (month >= 2 && day >= 60)
		{
			days++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
		else
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
	}
}
