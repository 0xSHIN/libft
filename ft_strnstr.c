/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyildiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 07:23:05 by alyildiz          #+#    #+#             */
/*   Updated: 2023/05/06 07:26:31 by alyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	d;

	d = 0;
	j = 0;
	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && ft_strlen(little) < ft_strlen(big))
	{
		while (big[i + j] == little[j] && i + j < len)
		{
			d++;
			if (d == ft_strlen(little))
				return ((char *)big + i);
			j++;
		}
	i++;
	j = 0;
	d = 0;
	}
	return (NULL);
}
