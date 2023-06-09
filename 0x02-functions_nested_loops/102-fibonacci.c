#include <stdio.h>
#include "main.h"
/**
 * main- Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 * Return: always 0
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, sum;

	printf("%lu, %ld", fib1, fib2);

	for (count = 2; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf(", %lu", sum);

		fib1 = fib2;
		fib2 = sum;
	}
	printf("\n");
	return (0);
}
