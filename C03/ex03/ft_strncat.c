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
 

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int l;

    i = 0;
    l = ft_strlen(&dest[0]);
    
    while (*(src+i) != '\0')
    {
        *(dest+i+l) = *(src+i);
        i++;
    }
    return(&dest[0]);    
}

/*int main (void)
{
    char str1[100] = "abcd";
    char str2[] = "abcK";
    
    ft_strncat(&str1[0],&str2[0], 4);
    return(0);
}*/
