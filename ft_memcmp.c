/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 12:18:09 by honlee            #+#    #+#             */
/*   Updated: 2020/12/21 12:28:22 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *ptr1, const void *ptr2, size_t len)
{
	size_t				idx;
	unsigned char		*s1;
	unsigned char		*s2;

	idx = 0;
	s1 = (unsigned char *)ptr1;
	s2 = (unsigned char *)ptr2;
	while (idx < len)
	{
		if (s1[idx] != s2[idx])
			return (s1[idx] - s2[idx]);
		idx++;
	}
	return (0);
}
