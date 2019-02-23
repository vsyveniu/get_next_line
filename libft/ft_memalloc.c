/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 15:40:42 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/06 13:34:05 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (void*)malloc(size);
	if (dest != NULL)
	{
		while (i < size)
		{
			dest[i] = 0;
			i++;
		}
		return (dest);
	}
	return (NULL);
}
