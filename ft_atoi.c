#include "libft.h"

int ft_atoi(char *str)
{
    int i;
    int sign;
    int base;

    i = 0;
    sign = 1;
    base = 0;
    while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
    {
        i += 1;
    }
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        base = base * 10 + (str[i] - '0');
        i++;
    }
    return (base * sign);
}
