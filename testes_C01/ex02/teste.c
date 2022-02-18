
#include <stdio.h>
#include "ft_swap.c"

int main()
{
	int a;
	int b;
	a = 10;
	b = 20;
	
	ft_swap(&a, &b);
	printf("a = %d / b = %d ", a, b);
	return 0;
}