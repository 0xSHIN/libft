#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    size_t i;
    char chr;

    chr = (char *)c;
    while (str[i] != '\0')
    {
        if(str[i] == chr)
            return (i)
        i++;
    }
    return (NULL);
}