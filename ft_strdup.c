#include "libft.h"

char    *ft_strdup(const char *src)
{
	const char    *str;
	int		i;

	str = malloc(sizeof(const char) * ft_strlen(src) + 1);
	if (!str)
		return (0x0);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
