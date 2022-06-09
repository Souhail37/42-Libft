/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:35:42 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/12 17:36:18 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1 + start);
	while (s1[end + start - 1] && ft_strchr(set, s1[end + start - 1]))
		end--;
	if (end + start <= 0)
	{
		str = (char *)malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	str = malloc (sizeof(char) * end + 1);
	if (str == NULL)
		return (0);
	ft_strlcpy(str, s1 + start, end + 1);
	str[end] = '\0';
	return (str);
}

// #include <stdio.h>

// int	main()
// {
// 	char	s[] = "hello world hello";

// 	printf("%s\n", ft_strtrim(s, "hello"));
// }