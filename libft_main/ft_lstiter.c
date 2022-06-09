/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:48:14 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/10 14:57:45 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	plus(void *p)
// {
// 	++*(int *)p;
// }

// #include <stdio.h>

// int	main()
// {
// 	int		tab[] = {0, 1, 2, 3, 4};
// 	t_list	*lst;
// 	lst = ft_lstnew(tab);
// 	int	i = 1;
// 	while (i < 5)
// 	{
// 		ft_lstadd_back(&lst, ft_lstnew(tab + i));
// 		i++;
// 	}
// 	ft_lstiter(lst, plus);
// 	t_list	*tmp = lst;
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d\n", *(int*)tmp->content);
// 		tmp = tmp->next;
// 		i++;
// 	}
// }