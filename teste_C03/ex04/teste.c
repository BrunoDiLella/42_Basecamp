#include <stdio.h>
#include "ft_strstr.c"
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
    char str[] = "f";
    char to_find[] = "r";

    printf("pirata substring é: %s\n", ft_strstr(str, to_find));
	printf("Original substring é: %s\n", strstr(str, to_find));
   
    return (0);
}