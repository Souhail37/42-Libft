/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:57:55 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/13 11:08:06 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*str;

	if (lst == NULL)
		return (NULL);
	str = 0;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&str, del);
			return (NULL);
		}
		ft_lstadd_back(&str, new);
		lst = lst->next;
	}
	return (str);
}
