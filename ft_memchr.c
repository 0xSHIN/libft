#include "libft.h"

void *ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
    char *str_ptr;
    size_t i;
    
    str_ptr = (char*)memoryBlock;
    while (i != size)
    {
        if(str_ptr[i] == (char)searchedChar)
            return (i);
        i++;
    }
    return (NULL);
}