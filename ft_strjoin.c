#include "libft.h"

int    ft_count(int count, char **strs, char *sep, int size)
{
    int    i;

    i = 0;
    count = 1;
    while (i < size)
        count += ft_strlen(strs[i++]) + ft_strlen(sep);
    return (count);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    int        i;
    int        j;
    int        k;
    char    *join;

    i = 0;
    j = 0;
    k = 0;
    join = (char *)malloc(sizeof(char *) * ft_count(1, strs, sep, size));
    if (join == 0)
        return (0);
    i = -1;
    while (++i < size)
    {
        while (strs[i][j])
            join[k++] = strs[i][j++];
        j = 0;
        while (sep[j] && i < size - 1)
            join[k++] = sep[j++];
        j = 0;
    }
    join[k] = '\0';
    return (join);
}    