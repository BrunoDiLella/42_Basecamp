#include <stdio.h>
#include "ft_sqrt.c"

int main()
{

	printf("> -2 = 0\n< %i\n", ft_sqrt(-2));
    printf("> 0 = 0\n< %i\n", ft_sqrt(0));
    printf("> 16 = 4\n< %i\n", ft_sqrt(16));
    printf("> 36 = 6\n< %i\n", ft_sqrt(36));
    printf("> 2147483647 = 0\n< %i\n", ft_sqrt(2147483647));
}