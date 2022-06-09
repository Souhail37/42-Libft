/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:04:04 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/12 18:43:36 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*str;

	str = *lst;
	while (str)
	{
		ft_lstdelone(str, del);
		str = str->next;
	}
	*lst = NULL;
}
