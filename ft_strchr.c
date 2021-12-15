/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 13:07:01 by honlee            #+#    #+#             */
/*   Updated: 2020/12/21 13:16:58 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *str, int value)
{
	size_t idx;

	idx = 0;
	if (value == 0)
		return ((char *)(str + ft_strlen(str)));
	while (str[idx] != 0)
	{
		if (str[idx] == (char)value)
			return ((char *)(str + idx));
		idx++;
	}
	return (NULL);
}
