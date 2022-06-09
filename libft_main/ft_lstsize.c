/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:47:45 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/12 18:39:21 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main()
// {
// 	t_list	*str;
// 	t_list	*elem1 = ft_lstnew("hello");
// 	t_list	*elem2 = ft_lstnew("hello");
// 	t_list	*elem3 = ft_lstnew("hello");
// 	t_list	*elem4 = ft_lstnew("hello");
// 	t_list	*elem5 = ft_lstnew("hello");

// 	elem1->next = elem2;
// 	elem2->next = elem3;
// 	elem3->next = elem4;
// 	elem4->next = elem5;
// 	elem5->next = NULL;
// 	str = elem1;

// 	printf ("%d\n", ft_lstsize(str));
// }