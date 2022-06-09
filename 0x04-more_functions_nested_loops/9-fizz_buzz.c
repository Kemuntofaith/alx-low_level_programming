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

	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0 && (i % 3) != 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
