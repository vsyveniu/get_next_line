/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:13:41 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/06 14:14:15 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int symbol)
{
	int len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char)symbol)
		{
			return ((char *)&str[len]);
		}
		len--;
	}
	return (NULL);
}
