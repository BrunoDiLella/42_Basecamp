#include "ft_str_is_numeric.c"
#include <stdio.h>

int main()
{
	char str[] = "1223456t67";
	char str2[] = "123456789";
	char str3[] = "";
	
	printf("letras %d \n", ft_str_is_numeric(str));
	printf("numeros %d \n", ft_str_is_numeric(str2));
	printf("Vazio %d \n", ft_str_is_numeric(str3));
	return 0;
}