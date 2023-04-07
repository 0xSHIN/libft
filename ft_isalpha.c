#include "libft.h"

int ft_isalpha(int chr)
{
    if ((chr >= 0b1100001 && chr <= 0b1111010) || (chr >= 0b1000001 && chr <= 0b1011010))
        return (1);
    return (0);
}