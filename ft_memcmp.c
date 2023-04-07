#include "libft.h"

int ft_memcmp( const void * pointer1, const void * pointer2, size_t size )
{
    char *str_ptr1;
    char *str_ptr2;
	size_t  i;

    str_ptr1 = (char*)pointer1;
    str_ptr2 = (char*)pointer2;
	i = 0;
	while ((str_ptr1[i] || str_ptr2[i]) && i < size)
	{
		if (str_ptr1[i] != str_ptr2[i])
			return (str_ptr1[i] - str_ptr2[i]);
		i++;
	}
	return (0);
}