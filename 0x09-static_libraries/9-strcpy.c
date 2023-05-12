#include "main.h"
/**
 * char *_strcpy- function that copies the string pointed to by src
 * @dest: copy to it
 * @src: copy from it
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int a;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (a = 0; a < i; a++)
	{
		dest[a] = src[a];
	}
	dest[i] = '\0';
	return (dest);
}
