#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	int i;

	i = 0;
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (lst->content);
}

int main(void)
{
		t_list *list_test;
		int i = 3;
		t_list *first;
		list_test = malloc(sizeof(t_list));
		first = list_test;
		while (i)
		{
				list_test->next= malloc(sizeof(t_list));
				list_test = list_test->next;
				i--;
		}
		list_test = first;
		printf("taille = %d \n", ft_lstlast(list_test));
		return (0);
}
