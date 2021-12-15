/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:36:28 by honlee            #+#    #+#             */
/*   Updated: 2020/12/22 13:26:28 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *))
{
	t_list			*new_lst;
	t_list			*ret;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(new_lst = ft_lstnew(f(lst->content))))
		return (NULL);
	ret = new_lst;
	lst = lst->next;
	while (lst != NULL)
	{
		if (!(new_lst->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (ret);
}
