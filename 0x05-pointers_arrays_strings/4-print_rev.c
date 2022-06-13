#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @str: the string
 */
void print_rev(char *str)
{
	while (*str)
		_putchar(*str--);
	_putchar('\n');
}
