#include "ft_str_is_uppercase.c"
#include <stdio.h>

int main()
{
	char str[] = "TESTE";
	char str2[] = "TEsTE";
	char str3[] = "";
	
	printf("Caracteres maiúsculos %d \n", ft_str_is_uppercase(str));
	printf("outros caracteres %d \n", ft_str_is_uppercase(str2));
	printf("Vazio %d \n", ft_str_is_uppercase(str3));
	return 0;
}