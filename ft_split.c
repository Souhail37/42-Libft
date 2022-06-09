/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:03:46 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/16 18:55:21 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	len;
	int	its_word;

	i = 0;
	len = 0;
	its_word = 0;
	while (s[i])
	{
		if (its_word == 0 && s[i] != c)
		{
			len++;
			its_word = 1;
		}
		if (s[i] == c)
			its_word = 0;
		i++;
	}
	return (len);
}

static int	ft_getln(char const *s, char c, int i)
{
	int	nc;

	nc = 0;
	while (s[i + nc] && s[i + nc] != c)
		nc++;
	return (nc);
}

static char	**mem_free(char **str, int len)
{
	while (len > 0)
	{
		len--;
		free(str[len]);
	}
	free (str);
	return (NULL);
}

static char	**ft_sub(char **str, char const *s, char *sub, char c)
{
	int	i;
	int	len;
	int	nc;
	int	l;

	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		nc = ft_getln(s, c, i);
		sub = (char *) malloc(sizeof(char) * nc + 1);
		if (!sub)
			return (mem_free(str, len));
		l = 0;
		while (l < nc)
			sub[l++] = s[i++];
		sub[l] = '\0';
		str[len++] = sub;
	}
	str[len] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*sub;
	int		i;
	int		len;

	if (!s)
		return (0);
	sub = NULL;
	str = (char **) malloc(sizeof(*str) * ft_count(s, c) + 1);
	if (!str)
		return (0);
	i = 0;
	len = 0;
	ft_sub(str, s, sub, c);
	return (str);
}
