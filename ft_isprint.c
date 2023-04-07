#include "libft.h"

int ft_isprint(int chr)
{
    if (chr >= 0b0100000 && chr <= 0b1111110)
        return (1);
    return (0);
}