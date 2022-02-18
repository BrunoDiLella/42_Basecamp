#include "ft_strncpy.c"
#include <stdio.h>
#include <string.h>

int main()
{
	int x = -1;
	char str[] = "12345";
	char dest[] = "111111111";
	
	printf("%s original \n", strncpy(dest, str, x));
	printf("%s \n", ft_strncpy(dest, str, x));
	
	return 0;
} 