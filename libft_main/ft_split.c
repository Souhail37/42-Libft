/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:03:46 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/13 13:03:05 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *s, char c)
{
	int	i;
	int	j;
	int	its_word;

	i = 0;
	j = 0;
	its_word = 0;
	while (s[i])
	{
		if (its_word == 0 && s[i] != c)
		{
			j++;
			its_word = 1;
		}
		if (s[i] == c)
			its_word = 0;
		i++;
	}
	return (j);
}

char	**mem_free(char **str, int j)
{
	while (j > 0)
	{
		j--;
		free (str[j]);
	}
	free (str);
	return (NULL);
}

int	ft_getln(char const *s, int i, char c)
{
	int	k;

	k = 0;
	while (s[i + k] && s[i + k] != c)
		k++;
	return (k);
}

char	**ft_sub(char **str, char const *s, char *sub, char c)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		k = ft_getln(s, i, c);
		sub = (char *) malloc(sizeof(char) * k + 1);
		if (!sub)
			return (mem_free(str, j));
		l = 0;
		while (l < k)
			sub[l++] = s[i++];
		sub[l] = '\0';
		str[j++] = sub;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*sub;
	int		i;
	int		j;

	if (!s)
		return (0);
	sub = NULL;
	str = (char **) malloc(sizeof(*str) * ft_count(s, c) + 1);
	if (!str)
		return (0);
	i = 0;
	j = 0;
	ft_sub(str, s, sub, c);
	return (str);
}

// #include <stdio.h>

// int	main()
// {
// 	char	s[] = "hello world good";
// 	char	**str;

// 	str = ft_split(s, ' ');
// 	int	i = 0;
// 	while (str[i])
// 	{
// 		printf("%s", str[i]);
// 		i++;
// 	}
// }