/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 11:38:40 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/02 16:29:01 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*dst;
	int		i;
	int		len;

	i = 0;
	dst = dest;
	len = ft_strlen(src);
	while (i != len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dest);
}
