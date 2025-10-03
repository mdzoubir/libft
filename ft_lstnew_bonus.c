#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;
	char	*s;
	
	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	s = ft_strdup((char *)content);
	node->content = s;
	node->next = NULL;

	return (node);
}