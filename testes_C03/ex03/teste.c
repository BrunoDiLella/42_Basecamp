#include "ft_strncat.c"
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Palavra 1";
	char str2[] = "Palavra 2";
	
	char str3[] = "Palavra 1";
	char str4[] = "Palavra 2";

	printf(" %s \n", str);
	printf(" %s \n", str2);
	ft_strncat(str, str2,5);
	printf(" %s \n", str);
	printf(" %s \n\n", str2);

	printf(" %s \n", str3);
	printf(" %s \n", str4);
	strncat(str3, str4, 5);
	printf(" %s \n", str3);
	printf(" %s \n", str4);
	return 0;
}