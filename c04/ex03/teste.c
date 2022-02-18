#include "ft_atoi.c"
#include <stdio.h>

int main()
{
	int result;
	char x[] = " ---+--+1234ab567";

	result = ft_atoi(x);

	printf("int: %d\n", result);

}