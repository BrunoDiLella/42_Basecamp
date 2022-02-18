#include <stdio.h>
#include "ft_ultimate_ft.c"

int main()
{
    int n;
    int *pont;
    int **pont2;
    int ***pont3;
    int ****pont4;
    int *****pont5;
    int ******pont6;
    int *******pont7;
    int ********pont8;


    pont = &n;
    pont2 = &pont;
    pont3 = &pont2;
    pont4 = &pont3;
    pont5 = &pont4;
    pont6 = &pont5;
    pont7 = &pont6;
    pont8 = &pont7;
    ft_ultimate_ft(&pont8);
    printf("%d ", n);
}