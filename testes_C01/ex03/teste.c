#include <stdio.h>
#include "ft_div_mod.c"

int main ()
{
	int a;
	int b;
	int resto;
	int resultado;
	a = 100;
	b = 10;

	resultado = a / b;
	resto = a % b;
	printf("ANTES / resultado = %d / resto = %d ", resultado, resto);
	ft_div_mod(a, b, &resultado, &resto);
	printf("DEPOIS resultado = %d / resto = %d ", resultado, resto);
	return 0;

}