#include "libft.h"

int ft_isdigit(int chr)
{
    if (chr >= 0b0110000 && chr <= 0b0111001)
        return (1);
    return (0);
}