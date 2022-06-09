/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:02:25 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/13 11:53:23 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		l;

	l = ft_strlen(s1);
	str = (char *) malloc(sizeof(*s1) * (l + 1));
	if (str == NULL)
		return (0);
	l = 0;
	while (s1[l])
	{
		str[l] = s1[l];
		l++;
	}
	str[l] = '\0';
	return (str);
}
