#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    size_t i;
    char chr;

    chr = char(c);
    i = ft_strlen(str);
    i--;
    while (i != 0)
    {
        if(str[i] == chr)
            return (i)
        i--;
    }
    return (NULL);
}