/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:55:39 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/06 14:24:16 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_isstart(const char *str)
{
	int i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n'
		|| str[i] == '\t'))
	{
		counter++;
		if (str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\t')
		{
			return (counter);
		}
		i++;
	}
	return (0);
}

static	int		ft_isend(const char *str, int len)
{
	int	counter;

	counter = 0;
	while (len > 0)
	{
		while (str[len] == ' ' || str[len] == '\n' || str[len] == '\t')
		{
			counter++;
			if (str[len - 1] != ' ' && str[len - 1] != '\n'
				&& str[len - 1] != '\t')
				return (counter);
			len--;
		}
		len--;
	}
	return (0);
}

static char		*ft_put(char const *s, int start, int destlen)
{
	char	*dest;
	char	*src;
	int		lenght;
	int		i;

	i = 0;
	src = (char*)s;
	lenght = destlen + start;
	if (!(dest = (char*)malloc(sizeof(char) * destlen + 1)))
		return (NULL);
	while (start < lenght)
		dest[i++] = src[start++];
	dest[i] = '\0';
	return (dest);
}

char			*ft_strtrim(char const *s)
{
	char	*dest;
	int		start;
	int		end;
	int		len;
	int		destlen;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	start = ft_isstart(s);
	end = ft_isend(s, len);
	destlen = (len) - start - end;
	if (destlen < 0)
	{
		start = 0;
		destlen = -1;
	}
	if (end == 1)
	{
		destlen += 1;
	}
	if (!(dest = ft_put(s, start, destlen)))
		return (NULL);
	return (dest);
}
