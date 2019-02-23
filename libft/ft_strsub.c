/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 15:54:50 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/06 14:21:42 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			j;
	char			*dest;

	i = 0;
	j = start;
	if (s == NULL)
		return (NULL);
	dest = (char*)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (s[start] != '\0' && start < (len + j))
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
