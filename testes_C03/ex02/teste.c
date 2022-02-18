#include "ft_strcat.c"
#include <stdio.h>
#include <string.h>

int main()
{
	char str[10] = "Palavra 1";
	char str2[10] = "Palavra 2";
	
	
	char str3[10] = "Palavra 1";
	char str4[10] = "Palavra 2";
	

	printf(" %s \n", str);
	printf(" %s \n", str2);
	ft_strcat(str, str2);
	printf(" %s \n", str);
	printf(" %s \n\n", str2);

	printf(" %s \n", str3);
	printf(" %s \n", str4);
	strcat(str3, str4);
	printf(" %s \n", str3);
	printf(" %s \n", str4);
	return 0;
}