/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 13:26:50 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/17 13:26:53 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(const char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (ft_isalpha(s[i]) == 1)
		{
			i++;
			if (ft_isalpha(s[i]) == 0 && s[i] != '\0')
				j++;
			if (ft_isalpha(s[i]) == 1 && s[i + 1] == '\0')
				j++;
		}
		i++;
	}
	return (j);
}
