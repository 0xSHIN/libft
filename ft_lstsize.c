#include "./libft.h"
int ft_lstsize(t_list *lst)
{
	int	i;
	
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++; 
	}
	return (i);
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
		printf("taille = %d \n", ft_lstsize(list_test));
		return (0);
}
