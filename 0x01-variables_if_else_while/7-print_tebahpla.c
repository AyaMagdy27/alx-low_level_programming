#include <stdio.h>
/**
 * main-Print lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char crev = 'z';
	while (crev >= 'a'){
	  putchar (crev);
	  crev--;
	}
	putchar ('\n');
	return (0);
}
