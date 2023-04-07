#include "libft.h"

int ft_isalnum(int chr)
{
    if ((chr >= 0b1100001 && chr <= 0b1111010) || (chr >= 0b1000001 && chr <= 0b1011010) || (chr >= 0b0110000 && chr <= 0b0111001))
        return (1);
    return (0);
}
