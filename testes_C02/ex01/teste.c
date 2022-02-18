#include "ft_strncpy.c"
#include <stdio.h>

int main()
{
	char str[] = "123456789";
	char dest[] = "";
	
	printf("%s ", ft_strncpy(dest, str, 5));
	return 0;
}