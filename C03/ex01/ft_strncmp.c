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


int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;

    i = 0;
    while ((*(s1+i) == *(s2+i)) && (i < (n-1)))
    {
        i++;
    }
    if (*(s1+i) != *(s2+i))
    {
        return((*(s1+i) - *(s2+i)));
    }
return((*(s1+i) - *(s2+i)));
}

int main (void)
{
    char str1[] = "abcd";
    char str2[] = "abcd";

    return(ft_strncmp(&str1[0],&str2[0],4));
}
