#include <stdio.h>
/**
 * main-Print the alphabet without q and e
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char alp = 'a';
	while (alp <= 'z')
	{
	  if (alp != 'e' && alp != 'q'){
	   putchar(alp);
	  }
	  alp++;
	}
        putchar('\n');
	return (0);
}
