/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 11:36:22 by honlee            #+#    #+#             */
/*   Updated: 2020/12/22 17:19:27 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				idx;

	idx = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (src > dest)
	{
		while (idx < len)
		{
			((unsigned char *)dest)[idx] = ((unsigned char *)src)[idx];
			idx++;
		}
	}
	else
	{
		while (len)
		{
			((unsigned char *)dest)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	return (dest);
}
