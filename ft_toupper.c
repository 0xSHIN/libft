#include "libft.h"

int	ft_toupper(int chr)
{
	if (chr >= 0b01100001 && chr <= 0b01111010)
		chr -= 32;
	return (chr);
}