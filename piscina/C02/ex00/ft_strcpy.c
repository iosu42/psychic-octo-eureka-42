#include <unistd.h>
#include <stdio.h>

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
 

char *ft_strcpy(char *dest, char *src)
{
    int l_s = ft_strlen(&src[0]);
    int l_d = ft_strlen(&dest[0]);
    int i;

    i = 0;
    if (l_s < l_d)
    {
        while (i < l_d)
        {
            dest[i] = src[i];
            if(i > l_s)
                 *(dest+i) = '\0';
            i++;
        }
    return (&dest[0]);

    }
    else
    {
        while (i < l_s)
        {
            dest[i] = src[i];
            i++;
        }
        return (&dest[0]);
    }
}



/*int main (void)
{
    char sr[] = "abfdsgf";
    char ds[] = "cdefg";
    
    ft_strcpy(&ds[0],&sr[0]);
    printf("%s\n", ds);
    return(0);
}*/
