/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:36:10 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/13 12:35:18 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int	main()
// {
// 	char	content[] = "test1";
// 	t_list	**lst;
// 	t_list	*new;

// 	new = ft_lstnew(content);
// 	lst = &new;
// 	ft_lstadd_front(lst, new);
// 	t_list	*str = *lst;
// 	printf("%s\n", (char *)str->content);
// 	char	content2[] = "test2";
// 	t_list	*new2;
// 	new2 = ft_lstnew(content2);
// 	ft_lstadd_front(lst, new2);
// 	str = *lst;
// 	printf("%s\n", (char *)str->content);
// }