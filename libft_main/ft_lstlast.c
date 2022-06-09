/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:20:55 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/12 18:39:53 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>

// int	main ()
// {
// 	t_list	*lst;
// 	t_list	*elem1 = ft_lstnew("test1");
// 	t_list	*elem2 = ft_lstnew("test2");
// 	t_list	*elem3 = ft_lstnew("test3");
// 	t_list	*elem4 = ft_lstnew("test4");

// 	lst = elem1;
// 	elem1->next = elem2;
// 	elem2->next = elem3;
// 	elem3->next = elem4;
// 	elem4->next = NULL;
// 	t_list	*str;
// 	str = ft_lstlast(lst);
// 	printf("%s\n", (char *)str->content);
// }