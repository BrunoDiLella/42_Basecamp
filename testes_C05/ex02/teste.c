#include <stdio.h>
#include  "ft_iterative_power.c"

int main()
{
	int a = 7;
	int b = 7;

	printf(" potencia de %d ^ %d = %d\n", a, b, ft_iterative_power(a, b));
	return 0;
}