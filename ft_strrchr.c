/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 13:25:39 by honlee            #+#    #+#             */
/*   Updated: 2020/12/21 13:40:31 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int value)
{
	int		idx;
	int		ret;

	idx = 0;
	ret = -1;
	if (value == 0)
		return ((char *)(str + ft_strlen(str)));
	while (str[idx] != 0)
	{
		if (str[idx] == (char)value)
			ret = idx;
		idx++;
	}
	if (ret != -1)
		return ((char *)(str + ret));
	return (NULL);
}
