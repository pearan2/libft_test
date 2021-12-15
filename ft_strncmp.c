/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 13:48:42 by honlee            #+#    #+#             */
/*   Updated: 2020/12/22 12:27:09 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t idx;

	idx = 0;
	if (len == 0)
		return (0);
	while (idx < len)
	{
		if (str1[idx] != str2[idx])
			return ((unsigned char)str1[idx] - (unsigned char)str2[idx]);
		if (str1[idx] == 0)
			return (0);
		idx++;
	}
	return (0);
}
