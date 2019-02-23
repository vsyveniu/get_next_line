/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 16:50:58 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/06 14:09:10 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t count)
{
	size_t	i;

	i = 0;
	while (i != count && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	while (i < count)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
