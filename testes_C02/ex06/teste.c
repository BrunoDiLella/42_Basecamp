#include "ft_str_is_printable.c"
#include <stdio.h>

int main()
{
	char str[] = "Aate s*tezZ";
	char str2[] = "\n";
	char str3[] = "";
	
	printf("Caracteres %d \n", ft_str_is_printable(str));
	printf("outros tipos de caracteres %d \n", ft_str_is_printable(str2));
	printf("Vazio %d \n", ft_str_is_printable(str3));
	return 0;
}