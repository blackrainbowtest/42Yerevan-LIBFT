/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:22:41 by aramarak          #+#    #+#             */
/*   Updated: 2025/02/14 20:40:25 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

#include <stdio.h>
int	main()
{
	t_list	*p_lst1;
	t_list	*p_lst2;

	p_lst1 = ft_lstnew("Head");
	p_lst2 = ft_lstnew("Tail");
	ft_lstadd_front(&p_lst1, p_lst2);
	printf("%s\n", (char *)p_lst1->content);

	return (0);
}
