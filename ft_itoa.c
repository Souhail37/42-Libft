/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:46:58 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/12 15:52:27 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n = -n;
		i = 1;
	}
	else
		i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	s;
	char	*str;
	int		i;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_start(n);
	if (n <= 0)
		n = -n;
	str = (char *) malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (0);
	str[i] = '\0';
	while (i--)
	{
		s = n % 10 + '0';
		str[i] = s;
		n /= 10;
		if (n == 0 && i == 1)
			str[--i] = '-';
	}
	return (str);
}
