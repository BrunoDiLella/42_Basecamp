#include "ft_strcmp.c"
#include <stdio.h>

#include <string.h>
int main()
{
	char str[] = "12345";
	char str2[] = "12345";
	char str3[] = "3";
	
	printf("Igual pirata %d \n", ft_strcmp(str, str2));
	printf("Igual original %d \n", strcmp(str, str2));
	printf("primeira maior pirata %d \n", ft_strcmp(str3, str2));
	printf("primeira maior original %d \n", strcmp(str3, str2));
	printf("segunda maior pirata %d \n", ft_strcmp(str2, str3));
	printf("segunda maior original %d \n", strcmp(str2, str3));
	return 0;
}