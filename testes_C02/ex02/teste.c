#include "ft_str_is_alpha.c"
#include <stdio.h>

int main()
{
	char str[] = "ZAaztes*te";
	char str2[] = "ZAazteste";
	char str3[] = "";
	
	printf("Caracteres %d \n", ft_str_is_alpha(str));
	printf("Letras %d \n", ft_str_is_alpha(str2));
	printf("Vazio %d \n", ft_str_is_alpha(str3));
	return 0;
}