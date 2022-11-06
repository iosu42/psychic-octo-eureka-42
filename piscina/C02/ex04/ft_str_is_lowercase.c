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

int ft_str_is_lowercase(char *str)
{
    int i;
    int m;

    i = 0;
    m = 0;
    while ( i < ft_strlen(&str[0]))
    {
        if (((*(str+i) > 96) && (*(str+i) < 123)))
                {
                    m++;                
                }
        i++;
    }
    if (( m == i) || (ft_strlen(&str[0]) == 0))
    {
        return(1);
    }
    else
    return(0);
}

/*int main(void)
{
    char c[] = "";
    ft_str_is_lowercase(&c[0]);
}*/
