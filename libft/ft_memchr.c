/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:21:45 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/06 13:37:31 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t num)
{
	unsigned char	*source;
	size_t			i;

	i = 0;
	source = (unsigned char *)src;
	while (i < num)
	{
		if ((unsigned char)source[i] == (unsigned char)c)
			return ((unsigned char *)source + i);
		i++;
	}
	return (NULL);
}
