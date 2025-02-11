#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_list;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	tmp = lst;
	while (tmp)
	{
		
		tmp = tmp->next;
	}
	return (new_list);
}
