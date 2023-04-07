#include "libft.h"

void    *ft_memset(void *str, int chr, size_t n)
{
    size_t  i;
    char    *str_ptr;

    // convert void pointers into char pointers
    str_ptr = char(*str)
    i = 0;
    while (i < n)
    {
        str_ptr[i] = chr;
        i++;
    }
    return (str);
}
