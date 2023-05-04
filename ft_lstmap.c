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

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	if (lst == NULL)
		return NULL;
	while(lst)
	{
		ft_lstadd_back(&new, f(lst->content));
		lst = lst->next;
	}
	return new;
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

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d -> ", (int)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

void	*increment(void *content)
{
    int *value = (int *)malloc(sizeof(int));
    if (!value)
        return NULL;
    *value = (int)content + 1;
    return (void *)value;
}
void del_function(void *content)
{
    free(content);
}

int main(void)
{
    t_list *list = NULL;
    t_list *new_list = NULL;

    ft_lstadd_back(&list, ft_lstnew((void *)1));
    ft_lstadd_back(&list, ft_lstnew((void *)2));
    ft_lstadd_back(&list, ft_lstnew((void *)3));

    printf("Original list: ");
    print_list(list);

    new_list = ft_lstmap(list, increment, del_function);

    printf("New list after ft_lstmap: ");
    print_list(new_list);

    ft_lstclear(&list, del_function);
    ft_lstclear(&new_list, del_function);
    return (0);
}
