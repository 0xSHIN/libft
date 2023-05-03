#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list *cellule = malloc(sizeof(t_list));
	if (cellule == NULL)
		return NULL;
	cellule->content = content;
	cellule->next = NULL;
	
	return content;
}
