/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 11:29:24 by honlee            #+#    #+#             */
/*   Updated: 2020/12/22 14:29:18 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	size_t				idx;
	unsigned char		*de;
	unsigned char		*sr;
	unsigned char		b;

	idx = 0;
	de = (unsigned char *)dest;
	sr = (unsigned char *)src;
	b = (unsigned char)c;
	while (idx < len)
	{
		de[idx] = sr[idx];
		if (de[idx] == b)
			return (de + idx + 1);
		idx++;
	}
	return (NULL);
}
