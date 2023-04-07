#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
		size_t	i;
		char	*tab;
		if (s == NULL)
		{
				tab = 0;
				return (tab);
		}
		tab = malloc(sizeof(char) * len - start + 1);
		if (tab == NULL)
				return (0x0);
		i = 0;
		while (start <= len)
		{
				tab[i] = s[start];
				i++;
				start++;
		}
		tab[i] = '\0';
		return (tab);
} 
