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

// void	del(void *data)
// {
// 	char	*p;

// 	while (*p)
// 		*p++ = 0;
// }

// #include <stdio.h>

// int	main()
// {
// 	t_list	**lst;
// 	t_list	*str;

// 	str = *lst;
// 	str = ft_lstnew("hello");
// 	printf("%s\n", (char *)str->content);
// 	ft_lstclear(lst, &del);
// 	printf("%s\n", (char *)str->content);
// }