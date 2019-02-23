/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 09:09:34 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/17 16:38:09 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

static int		ft_words_count(const char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
		{
			i++;
			if (s[i] != c && s[i] != '\0')
			{
				j++;
				while (s[i] != c && s[i] != '\0')
					i++;
			}
		}
		i++;
	}
	return (j);
}

static int		ft_wordbegin(const char *str, int i, char c)
{
	if (str[i] != c && i == 0)
		return (1);
	if (str[i] != c && str[i - 1] == c)
		return (1);
	return (0);
}

static char		*ft_strput(const char *s, int i, int j)
{
	int		k;
	char	*dest;

	k = 0;
	if (!(dest = (char*)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	while (k != j)
	{
		dest[k] = s[i];
		i++;
		k++;
	}
	dest[k] = 0;
	return (dest);
}

static char		**ft_free(char **src, int i)
{
	while (i >= 0)
	{
		free(src[i]);
		i--;
	}
	free(src);
	src = NULL;
	return (src);
}

char			**ft_strsplit(const char *str, char c)
{
	int		i;
	int		k;
	int		j;
	char	**dest;

	i = 0;
	k = 0;
	if (!str)
		return (NULL);
	if (!(dest = (char**)malloc(sizeof(char*) * (ft_words_count(str, c) + 1))))
		return (NULL);
	while (str[i] != '\0')
	{
		j = 0;
		if (ft_wordbegin(str, i, c) == 1)
		{
			while (str[i + j] != c && str[i + j] != '\0')
				j++;
			if (!(dest[k++] = ft_strput(str, i, j)))
				return (ft_free(dest, k));
		}
		i++;
	}
	dest[k] = NULL;
	return (dest);
}
