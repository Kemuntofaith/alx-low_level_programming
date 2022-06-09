#include "main.h"
/**
 * _isdigit - writes the character c to stdout
 * @c: the charcter chack
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	if (c < 48 || c > 58)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
