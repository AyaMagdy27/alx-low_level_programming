#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main- prints the result of simple operations
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int (*op)(int, int), num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}
	if (!num2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op(num1, num2));
	return (0);
}
