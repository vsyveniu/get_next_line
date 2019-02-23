/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:24:34 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/06 13:32:18 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(int n)
{
	int count;

	count = 0;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*ft_isnegative(int n, int len, char *dest)
{
	char	*dst;
	int		i;

	dst = dest;
	n = n * -1;
	i = len - 1;
	while (i > 0)
	{
		dst[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	dst[0] = '-';
	return (dst);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*dest;

	len = ft_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	dest = (char*)malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	dest[len] = '\0';
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		dest = ft_isnegative(n, len, dest);
		return (dest);
	}
	while (len--)
	{
		dest[len] = n % 10 + '0';
		n = n / 10;
	}
	return (dest);
}
