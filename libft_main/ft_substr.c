/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:28:43 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/12 17:49:56 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (len > ft_strlen(s))
		str = (char *)malloc(sizeof(char) * ft_strlen(s + start) + 1);
	else
	{
		str = (char *) malloc(sizeof(char) * (len + 1));
		if (!str)
			return (0);
	}
	while (s[i])
	{
		if (j < len && i >= start)
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}

// #include <stdio.h>

// int	main()
// {
// 	char	s[] = "hello world good";

// 	printf("%s\n", ft_substr(s, 5, 20));
// }