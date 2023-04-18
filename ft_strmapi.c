#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
		size_t	i;
		char	*str;
		
		i = 0;
		str = malloc(sizeof(char) * ft_strlen(s) + 1);
		if (str == NULL || f == NULL || s == NULL)
				return (NULL);
		while (s[i] != '\0')
		{
				str[i] = s[i];
				str[i] = (*f)(i, str[i]);
				i++;
		}
		return (str);
}
