/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hademola <hademola@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 05:35:19 by hademola          #+#    #+#             */
/*   Updated: 2022/08/17 20:02:44 by hademola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;

	first = 0;
	if (lst)
	{		
		while (lst)
		{
			new = ft_lstnew(f(lst->content));
			if (!new)
			{
				ft_lstclear(&first, del);
				return (first);
			}
			ft_lstadd_back(&first, new);
			lst = lst->next;
		}
	}
	return (first);
}
