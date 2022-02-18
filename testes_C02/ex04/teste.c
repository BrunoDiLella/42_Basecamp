#include "ft_str_is_lowercase.c"
#include <stdio.h>

int main()
{
	char str[] = "teste";
	char str2[] = "teSte";
	char str3[] = "";
	
	printf("Caracteres minusculos %d \n", ft_str_is_lowercase(str));
	printf("outros caracteres %d \n", ft_str_is_lowercase(str2));
	printf("Vazio %d \n", ft_str_is_lowercase(str3));
	return 0;
}