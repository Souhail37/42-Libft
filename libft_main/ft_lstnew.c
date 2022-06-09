/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:22:48 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/12 17:50:28 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*str;

	str = (t_list *)malloc(sizeof(t_list));
	if (!str)
		return (0);
	str->content = content;
	str->next = NULL;
	return (str);
}

// #include <stdio.h>
// int	main()
// {
// 	char	content[] = "hello";
// 	t_list	*str;

// 	str = ft_lstnew(content);
// 	printf("%s\n", (char *)str->content);
// }