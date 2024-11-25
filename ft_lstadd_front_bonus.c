/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndabbous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:33:08 by ndabbous          #+#    #+#             */
/*   Updated: 2024/11/25 14:33:09 by ndabbous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int	main()
{
	t_list	*head = NULL;
	//t_list	*new = 6;
	t_list	*temp = head;
	
	ft_lstadd_front(&head, 6);
	while (temp != NULL)
	{
		printf("%d->", temp->content);
		temp = temp->next;
	}
	return (0);
}*/
