/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:37:33 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/13 11:21:51 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*str;

	if (*lst == NULL)
		*lst = new;
	else
	{
		str = ft_lstlast(*lst);
		str->next = new;
	}
}
// #include <stdio.h>
// int	main()
// {
// 	char	content[] = "hi";
// 	t_list	**lst;
// 	t_list	*new = ft_lstnew(content);

// 	t_list	*elem1 = ft_lstnew("test");
// 	t_list	*elem2 = ft_lstnew("test");
// 	t_list	*elem3 = ft_lstnew("test");

// 	elem1->next = elem2;
// 	elem2->next = elem3;
// 	elem3->next = NULL;
// 	lst = &elem1;
// 	ft_lstadd_back(lst, new);
// 	t_list	*str;
// 	str = *lst;
// 	printf("%s\n", (char *)str->content);
// 	str = ft_lstlast(*lst);
// 	printf("%s\n", (char *)str->content);
// }