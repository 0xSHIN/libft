 /* include guard (so it doens't include multiple times) */
#ifndef LIBFT_H_
#define LIBFT_H_

/* include headers */
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/* libc functions */
int ft_isalpha(int chr);
int ft_isdigit(int chr);
int ft_isalnum(int chr);
int ft_isascii(int chr);
int ft_isprint(int chr);
int ft_strlen(char *str);
void *ft_memset(void *str, int chr, size_t n);
void ft_bzero(void *str, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dest, char *src, size_t size);
int	ft_toupper(int chr);
int	ft_tolower(int chr);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *memoryBlock, int searchedChar, size_t size);
int ft_memcmp( const void * pointer1, const void * pointer2, size_t size );
char *ft_strnstr(const char	*big, const char *little, size_t len);
int ft_atoi(char *str);

/* malloc functions */

char    *ft_strdup(const char *src);

/* sup functions */

char    *ft_strjoin(int size, char **strs, char *sep);
/* bonus functions */


#endif
