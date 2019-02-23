/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:21:23 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/06 13:36:46 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t size)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*dest;
	unsigned char	ch;

	i = 0;
	ch = (unsigned char)c;
	source = (unsigned char*)src;
	dest = (unsigned char*)dst;
	while (i < size)
	{
		dest[i] = source[i];
		if (source[i] == ch)
		{
			return (dst + (i + 1));
		}
		i++;
	}
	return (NULL);
}
