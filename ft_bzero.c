#include "libft.h"

void    ft_bzero(void *str, size_t n)
{
    size_t  i;
    char    *str_ptr;

    i = 0;
    // convert void pointers into char pointers
    str_ptr = (char *)str;
    while (i < n)
    {
        str_ptr[i] = '\0';
        i++;
    }
}