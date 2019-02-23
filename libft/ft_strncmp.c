/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 15:32:56 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/06 13:52:46 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t num)
{
	size_t i;

	i = 0;
	while (i < num && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (num == 0 || i == num)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
