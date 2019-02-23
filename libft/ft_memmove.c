/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 13:24:34 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/06 13:39:33 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char	*source;
	unsigned char	*dst;

	dst = (unsigned char*)dest;
	source = (unsigned char*)src;
	if (dest <= src)
		ft_memcpy(dest, src, count);
	else
		while (count > 0)
		{
			dst[count - 1] = source[count - 1];
			count--;
		}
	return (dest);
}
