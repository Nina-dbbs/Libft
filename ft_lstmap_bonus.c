/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndabbous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:51:43 by ndabbous          #+#    #+#             */
/*   Updated: 2024/11/25 18:04:21 by ndabbous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tab;
	t_list	*copy;
	void	*temp;

	copy = NULL;
	tab = NULL;
	while (lst)
	{
		temp = f(lst->content);
		copy = ft_lstnew(temp);
		if (!copy)
		{
			del(temp);
			ft_lstclear(&copy, del);
			return (NULL);
		}
		ft_lstadd_back(&tab, copy);
		lst = lst->next;
	}
	return (tab);
}
