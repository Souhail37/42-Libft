/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:58:51 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/13 11:14:01 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free (lst);
	}
}

// void	free_(void *data)
// {
// 	char	*con;

// 	while (*con)
// 		*con++ = 0;
// }

// #include <stdio.h>
// int	main()
// {
// 	t_list *lst;

// 	lst = ft_lstnew("hello");
// 	printf("%s\n", (char *)lst->content);
// 	ft_lstdelone(lst, &free_);
// 	printf("%s\n", (char *)lst->content);
// }