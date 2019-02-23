/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:31:33 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/02 16:31:40 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dlen;
	size_t		srclen;
	size_t		ret;

	i = 0;
	ret = 0;
	dlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dlen)
	{
		ret = size + ft_strlen(src);
		return (ret);
	}
	while (dst[i] != '\0' && i < size - 1)
		++i;
	while (*src != '\0' && i < size - 1)
	{
		dst[i++] = *src++;
	}
	dst[i] = '\0';
	ret = dlen + srclen;
	return (ret);
}
