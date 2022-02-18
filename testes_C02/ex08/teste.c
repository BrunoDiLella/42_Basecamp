#include "ft_strlowcase.c"
#include <stdio.h>

int main()
{
	char str[] = "ATES   *&¨¨58 TEZ";
	
	printf("%s \n", ft_strlowcase(str));
	return 0;
}