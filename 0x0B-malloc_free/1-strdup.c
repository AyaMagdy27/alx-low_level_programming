#include "main.h"
#include <stdlib.h>
/**
 * _strdup- duplicate to new memory space location
 * @str: char
 * Return: 0, NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *c;
	int i, j = 0;

	 if (str == NULL)
		 return (NULL);
	 i = 0;
	 while(str[i] != '\0')
		 i++;
	 c = malloc(sizeof(char) * (i + 1));

	 if (c == NULL)
		 return (NULL);
	 for (j = 0; str[j]; j++)
		 c[j] = str[j];
	 return (c);
}
