#include "libft.h"

int ft_isascii(int chr)
{
    if (chr >= 0b0000000 && chr <= 0b1111111)
        return (1);
    return (0);
}