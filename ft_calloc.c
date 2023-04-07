#include "libft.h"

void *ft_calloc(size_t elementCount, size_t elementSize)
{
		char	*tab;
		size_t	total;
		
		total = elementCount * elementSize;
		tab = malloc(total);
		if (tab == NULL)
				return (0x0);
		ft_memset(tab, 0, elementCount);
		return total;
}

