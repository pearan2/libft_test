/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:40:16 by honlee            #+#    #+#             */
/*   Updated: 2020/12/22 12:36:49 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *ptr, int c, size_t size)
{
	size_t	idx;

	idx = 0;
	while (idx < size)
	{
		((unsigned char *)ptr)[idx] = c;
		idx++;
	}
	return (ptr);
}
