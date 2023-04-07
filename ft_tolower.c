#include "libft.h"

int	ft_tolower(int chr)
{
	if (chr >= 0b01000001 && chr <= 0b01011010)
		chr += 32;
	return (chr);
}