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
 

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (*(s1+i) == *(s2+i))
    {
        i++;
    }
    if (*(s1+i) != *(s2+i))
    {
        return((*(s1+i) - *(s2+i)));
    }
return(0);    
}

/*int main (void)
{
    char str1[] = "abcd";
    char str2[] = "abcK";
    
    ft_strcmp(&str1[0],&str2[0]);
    return(0);
}*/
