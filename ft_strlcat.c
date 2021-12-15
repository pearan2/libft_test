/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 12:58:24 by honlee            #+#    #+#             */
/*   Updated: 2020/12/21 15:26:59 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, char *src, size_t size)
{
	size_t dest_size;
	size_t s_idx;
	size_t d_idx;
	size_t ret;

	dest_size = ft_strlen(dest);
	s_idx = 0;
	d_idx = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[d_idx] != 0)
		d_idx++;
	while (src[s_idx] != 0 && (d_idx + s_idx + 1) < size)
	{
		dest[d_idx + s_idx] = src[s_idx];
		s_idx++;
	}
	dest[d_idx + s_idx] = 0;
	ret = ft_strlen(src);
	return (dest_size > size ? ret + size : ret + dest_size);
}
