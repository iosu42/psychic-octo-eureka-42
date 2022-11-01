#include <unistd.h> 

        
void ft_div_mod(int a, int b, int *div, int *mod)
{       
        *div = a / b;            
        *mod = a % b;            
}       
        
/*void main (void)                 
{       
        int a = 20;              
        int b = 3;               
        int div = 0;             
        int mod = 0;             
        ft_div_mod(a,b,&div,&mod);
        printf("dividendo: %d\n", div);
        printf("resto: %d\n", mod);
                                                                                  
}/*
