/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 14:25:48 by honlee            #+#    #+#             */
/*   Updated: 2020/12/21 14:28:31 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	size_t		src_size;
	char		*ret;
	size_t		idx;

	idx = 0;
	src_size = ft_strlen(src);
	if (!(ret = (char *)malloc(src_size + 1)))
		return (NULL);
	while (idx < src_size)
	{
		ret[idx] = src[idx];
		idx++;
	}
	ret[idx] = 0;
	return (ret);
}
