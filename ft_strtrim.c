#include "libft.h"

int is_set(char c, char const *set)
{
		size_t i;

		i = 0;
		while (set[i] != '\0')
		{
				if (set[i] == c)
						return (1);
				i++;
		}
		return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    if (s1 == NULL) {
        return NULL;
    }

    const char *start = s1;
    const char *end = s1 + ft_strlen(s1);

    // trouve le premier charset
    while (start < end && is_set((unsigned char)*start, set) == 1) {
        start++;
    }

    // trouve le dernier charset
    while (end > start && is_set((unsigned char)*(end - 1), set) == 1) {
        end--;
    }

    // calcule la longueur de la string trimmee
    size_t trimmed_len = end - start;

    char *trimmed_str = malloc(trimmed_len + 1);
    if (trimmed_str == NULL) {
        return NULL;
    }

    // copie les caractères
    ft_memcpy(trimmed_str, start, trimmed_len);
    trimmed_str[trimmed_len] = '\0';

    return trimmed_str;
}
