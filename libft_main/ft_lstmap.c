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

// void	*plus(void *p)
// {
// 	void *r = malloc(sizeof(int));
// 	*(int *)r = *(int *)p + 1;
// 	return (r);
// }

// void	free_(void *data)
// {
// 	char	*con;

// 	while (*con)
// 		*con++ = 0;
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
// 	t_list	*m = ft_lstmap(lst, plus, free_);
// 	t_list	*tmp = ft_lstlast(lst);

// 	tmp = m;
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d\n", *(int*)tmp->content);
// 		tmp = tmp->next;
// 		i++;
// 	}
// }