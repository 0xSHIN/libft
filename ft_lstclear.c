#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	tmp = *lst;
	while (tmp)
	{
		tmp = tmp->next;
		del(*lst);
		*lst = tmp;
	}
	*(lst) = NULL;
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;

    if (!lst || !new)
        return;
    if (!*lst)
    {
        *lst = new;
        return;
    }
    temp = *lst;
    while (temp->next)
        temp = temp->next;
    temp->next = new;
}

t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
        return;

    del(lst->content);
    free(lst);
}

void del_function(void *content)
{
    free(content);
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d -> ", (int)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    t_list *list = NULL;

    ft_lstadd_back(&list, ft_lstnew((void *)1));
    ft_lstadd_back(&list, ft_lstnew((void *)2));
    ft_lstadd_back(&list, ft_lstnew((void *)3));

    printf("Liste avant ft_lstclear: ");
    print_list(list);

    ft_lstclear(&list, del_function);

    printf("Liste après ft_lstclear: ");
    print_list(list);

    return (0);
}
