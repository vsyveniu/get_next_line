/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 11:19:21 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/06 14:51:19 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	unsigned int	i;
	unsigned char	*destcopy;
	unsigned char	c;

	c = ch;
	destcopy = (unsigned char*)dest;
	i = 0;
	while (i < count)
	{
		destcopy[i] = c;
		i++;
	}
	return (destcopy);
}
