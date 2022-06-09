#include "main.h"
/**
 * print_square - prints a square
 * @n: times
 */
void print_square(int n)
{
	int a;
	int b;

	b = n;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n != 0)
		{
			for (a = 1; a <= b; a++)
			{
				_putchar(35);
			}
			_putchar('\n');
			n--;
		}
	}
}
