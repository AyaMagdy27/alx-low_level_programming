#include<stdio.h>
/**
* main-Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("size of char : %d byte \n",sizeof(char));
        printf("size of int : %d bytes \n",sizeof(int));
	printf("size of long int : %d bytes \n",sizeof(long int));
	printf("size of long long int : %d bytes \n",sizeof(long long int));
	printf("size of float : %d bytes \n",sizeof(float));
	return (0);
}
