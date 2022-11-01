#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
        int div;
        int mod;

        div = *a / *b;
        mod = *a % *b;
       
        (*a) = div;
        (*b) = mod;
}

/*void main (void)
{
        int a = 100;
        int b = 33;
        printf("%d\n",a);
        printf("%d\n",b);
        ft_ultimate_div_mod(&a,&b);
        printf("%d\n",a);
        printf("%d\n",b);

}*/
