/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 09:17:50 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/14 09:17:52 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *substr)
{
	int	i;
	int	j;

	i = 0;
	if (*substr == '\0')
	{
		return ((char*)str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (substr[j] == str[i + j])
		{
			if (substr[j + 1] == '\0')
			{
				return ((char *)str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
