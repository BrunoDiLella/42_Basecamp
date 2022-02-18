#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int main()
{
	int a;
	int b;
	a = 100;
	b = 10;
	
	ft_ultimate_div_mod(&a, &b);
	printf(" a = %d / b = %d ", a, b);
	return 0;
}