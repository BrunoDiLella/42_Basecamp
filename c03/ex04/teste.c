#include <stdio.h>
#include "ft_strstr.c"
#include <string.h>

int main()
{
    char str[] = "Abacate";
    char to_find[] = "ca";

    printf("pirata substring é: %s\n", ft_strstr(str, to_find));
	printf("Original substring é: %s\n", strstr(str, to_find));
   
    return (0);
}