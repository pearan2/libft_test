/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 14:22:19 by honlee            #+#    #+#             */
/*   Updated: 2020/12/22 12:56:53 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t ele_cnt, size_t ele_size)
{
	void	*ret;

	if (!(ret = (void *)malloc(ele_cnt * ele_size)))
		return (NULL);
	ft_bzero(ret, ele_cnt * ele_size);
	return (ret);
}
