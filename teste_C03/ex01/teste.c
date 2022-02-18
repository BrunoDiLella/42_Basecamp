#include "ft_strncmp.c"
#include <stdio.h>
#include <string.h>

int main()
{
	int x = 4;
	char str[] = "135468";
	char str2[] = "135468";
	char str3[] = "1357";
	
	printf("Igual %d \n", ft_strncmp(str, str2, x));
	printf("Igual original %d \n", strncmp(str, str2, x));
	printf("primeira maior %d \n", ft_strncmp(str3, str2, x));
	printf("primeira maior original %d \n", strncmp(str3, str2, x));
	printf("segunda maior %d \n", ft_strncmp(str2, str3, x));
	printf("segunda maior original %d \n", strncmp(str2, str3, x));
	return 0;
}


    char    txt04[] = "";
    char    txt05[] = "df";
    //printf("%s\n", strstr(txt04, txt05));
    printf("%s\n", ft_strstr(txt04, txt05));
    return (0);