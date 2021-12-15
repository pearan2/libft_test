/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 13:41:28 by honlee            #+#    #+#             */
/*   Updated: 2020/12/22 17:28:12 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t s_idx;
	size_t f_idx;

	s_idx = 0;
	f_idx = 0;
	if (find[0] == 0)
		return ((char *)str);
	while (str[s_idx] != 0 && s_idx < len)
	{
		f_idx = 0;
		while (str[s_idx + f_idx] == find[f_idx] &&
				s_idx + f_idx < len)
		{
			if (find[f_idx + 1] == 0)
				return ((char *)(str + s_idx));
			f_idx++;
		}
		s_idx++;
	}
	return (NULL);
}
