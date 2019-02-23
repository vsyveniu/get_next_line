/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 11:21:42 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/12/13 11:21:44 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char			*ft_temp(char *saveline, char *buff, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	if (!(temp = (char *)malloc(sizeof(char *) * (size))))
		return (0);
	while (saveline[i] != '\0')
	{
		temp[i] = saveline[i];
		i++;
	}
	while (buff[j] != '\0')
	{
		temp[i] = buff[j];
		i++;
		j++;
	}
	temp[i] = '\0';
	return (temp);
}

static char			*ft_reallocate(char *saveline, char *buff)
{
	int		size;
	char	*temp;

	size = ft_strlen(saveline) + BUFF_SIZE;
	temp = ft_temp(saveline, buff, size);
	free(saveline);
	if (!(saveline = ft_strnew(size)))
		return (0);
	saveline = ft_strcpy(saveline, temp);
	free(temp);
	return (saveline);
}

static int			ft_read(int fd, char **saveline)
{
	static char		buff[BUFF_SIZE];
	int				res;

	res = read(fd, buff, BUFF_SIZE);
	if (res > 0)
	{
		buff[res] = '\0';
		if (!(*saveline = ft_reallocate(*saveline, buff)))
			return (-1);
	}
	return (res);
}

static char			*ft_fill(char *saveline, char *endposition)
{
	int		i;
	int		size;
	char	*temp;

	i = 0;
	size = endposition - saveline;
	if (!(temp = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (saveline[i] != '\0' && i < size)
	{
		temp[i] = saveline[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

int					get_next_line(int const fd, char **line)
{
	static char		*saveline;
	char			*endposition;
	int				retfd;

	if (fd < 0 || (!saveline && (!(saveline = ft_strnew(0)))))
		return (-1);
	endposition = ft_strchr(saveline, '\n');
	while (!(endposition))
	{
		retfd = ft_read(fd, &saveline);
		if (retfd < 0)
			return (-1);
		else if (retfd == 0 && (endposition = ft_strchr(saveline, '\0')))
		{
			if (endposition == saveline)
				return (0);
		}
		else
			endposition = ft_strchr(saveline, '\n');
	}
	*line = ft_fill(saveline, endposition);
	endposition = ft_strdup(endposition + 1);
	free(saveline);
	saveline = endposition;
	return (1);
}
