/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyveniu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:15:52 by vsyveniu          #+#    #+#             */
/*   Updated: 2017/11/14 10:16:24 by vsyveniu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list *nextnode;
	t_list *node;

	if (!alst || !del || !*alst)
		return ;
	node = *alst;
	while (node != NULL)
	{
		nextnode = node->next;
		del(node->content, node->content_size);
		node = nextnode;
		free(node);
	}
	*alst = NULL;
}
