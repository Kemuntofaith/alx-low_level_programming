#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * fizz: if divisible by 3
 * buzz: if divisible by 5
 * fizzbuzz: if divisible by both
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("Buzz\n");
	return (0);
}
