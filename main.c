#include "libft.h"
#include <stdio.h>


void    del(void *content)
{
    free(content);
}
int main(void)
{
    // int a = 10;
    // int b = 20;
    // int c = 30;
    
    t_list *node1 = ft_lstnew("Helo");
    t_list *node2 = ft_lstnew("hi");
    t_list *node3 = ft_lstnew("hihi");
    //t_list *new = ft_lstnew("This is the new");

    node1->next = node2;
    node2->next = node3;

    t_list *cur = node1;
    //ft_lstadd_back(&cur, new);
    while (cur)
    {
        printf("%s\n", (char *)cur->content);
        cur = cur->next;
    }
    ft_lstclear(&cur, del);
    while (cur)
    {
        printf("%s\n", (char *)cur->content);
        cur = cur->next;
    }
    return 0;
}