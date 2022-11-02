#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (*(str+i) != '\0')
    {
        i++;
    }
    return(i);
}

char *ft_strlowcase(char *str)
{
    int i;
    
    i = 0;
    while ( i < ft_strlen(&str[0]))
    {
        if (((*(str+i) > 64) && (*(str+i) < 91)))
                {
                    *(str+i) = (*(str+i) + 32);              
                }
        i++;
    }
    return(&str[0]);
}

/*int main(void)
{
    char c[] = "";
    ft_strlowcase (&c[0]);
}*/
