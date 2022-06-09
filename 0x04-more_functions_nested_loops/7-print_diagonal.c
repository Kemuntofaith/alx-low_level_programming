#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draw a diagonal line on terminal
 * @n: number of times character will be repeated
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				if (a == b)
				{
					_putchar(92);
				}
				else
				{
					_putchar(32);
				}
			}
			printf("\n");
		}
	}
}
