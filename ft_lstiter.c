#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

#include <stdlib.h>
#include <stdio.h>

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

void print_element(void *content)
{
    printf("%d ", (int)content);
}

int main(void)
{
    t_list *list = NULL;

    ft_lstadd_back(&list, ft_lstnew((void *)1));
    ft_lstadd_back(&list, ft_lstnew((void *)2));
    ft_lstadd_back(&list, ft_lstnew((void *)3));

    printf("List elements before ft_lstiter: ");
    ft_lstiter(list, print_element);
    printf("\n");

    // Here you can apply any other function to the list using ft_lstiter
    // For this example, we're just using the print_element function again.

    printf("List elements after ft_lstiter: ");
    ft_lstiter(list, print_element);
    printf("\n");

    // Don't forget to free the list and its content when you're done.
    // You can use ft_lstclear or a similar function for that.

    return (0);
}
