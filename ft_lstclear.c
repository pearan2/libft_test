/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:10:37 by honlee            #+#    #+#             */
/*   Updated: 2020/12/22 11:55:16 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_dellist(t_list *list, void (*del)(void *))
{
	if (list->next != NULL)
		ft_dellist(list->next, del);
	del(list->content);
	free(list);
}

void			ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst == NULL || *lst == NULL)
		return ;
	ft_dellist(*lst, del);
	*lst = NULL;
}
