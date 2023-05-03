#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	int i;

	i = 0;
	while (lst)
	{
		i++;
		lst->next;
	}
	return (lst);
}

#include <stdio.h>
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
    t_list *new_node;

    new_node = (t_list *)malloc(sizeof(t_list));
    if (new_node == NULL)
    {
        return NULL;
    }

    new_node->content = content;
    new_node->next = NULL;

    return new_node;
}

int main(void)
{
    t_list *head = NULL;
    t_list *last = NULL;

    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    if (node1 == NULL || node2 == NULL || node3 == NULL)
    {
        printf("Failed to allocate memory for nodes.\n");
        return 1;
    }

    ft_lstadd_front(&head, node1);
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node3);

    last = ft_lstlast(head);

    if (last != NULL)
    {
        printf("The content of the last node is: %s\n", (char *)last->content);
    }
    else
    {
        printf("The list is empty.\n");
    }

    // Free the allocated memory for nodes
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
