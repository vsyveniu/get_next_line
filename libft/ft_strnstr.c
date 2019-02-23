/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 09:16:38 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/14 09:16:40 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t num)
{
	size_t	i;
	char	*s;

	if (!*substr)
		return ((char*)str);
	while (*str && num > 0)
	{
		i = 0;
		s = (char*)str;
		while (*s++ == substr[i] && substr[i] != '\0' && i < num)
			i++;
		if (!substr[i])
			return ((char*)str);
		str++;
		num--;
	}
	return (NULL);
}
