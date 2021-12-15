/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 12:07:06 by honlee            #+#    #+#             */
/*   Updated: 2020/12/22 17:23:47 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *ptr, int value, size_t len)
{
	size_t		idx;

	idx = 0;
	while (idx < len)
	{
		if (((unsigned char *)ptr)[idx] == (unsigned char)value)
			return ((void *)(ptr + idx));
		idx++;
	}
	return (NULL);
}
