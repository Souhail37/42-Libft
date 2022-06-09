/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:53:57 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/13 12:05:43 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

// void	plus(unsigned int i, char *c)
// {
// 	*c += i;
// }

// #include <stdio.h>

// int	main()
// {
// 	char	s[] = "000000";

// 	ft_striteri(s, plus);
// 	printf("%s\n", s);
// 	return (0);
// }