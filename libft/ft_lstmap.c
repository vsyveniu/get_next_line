/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:10:56 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/14 10:11:01 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *link;
	t_list *fresh;

	if (!lst || !f)
		return (NULL);
	fresh = f(lst);
	link = fresh;
	lst = lst->next;
	while (lst)
	{
		link->next = f(lst);
		link = link->next;
		lst = lst->next;
	}
	return (fresh);
}
