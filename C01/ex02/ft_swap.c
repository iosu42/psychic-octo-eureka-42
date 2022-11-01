#include<unistd.h>
 
void ft_swap(int *a, int *b)
{
    int swap;
 
    swap = *a;
    *a = *b;
    *b = swap;
}
 

/*void main (void)
{
    int a;
    int b;
 
    a = 23;
    b = 42;
    printf("%d\n", a);
    printf("%d\n", b);
    ft_swap(&a,&b);
    printf("%d\n", a);
    printf("%d\n", b);
 
}*/
