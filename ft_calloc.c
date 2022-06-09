/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:30:26 by sismaili          #+#    #+#             */
/*   Updated: 2021/11/12 16:17:36 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;
	size_t	bytes;

	bytes = count * size;
	s = malloc(bytes);
	if (s != NULL)
		ft_bzero(s, bytes);
	return (s);
}
