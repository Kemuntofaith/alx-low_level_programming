#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	while (*s)
		_putchar(*s--);
	_putchar('\n');
}
