/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 14:29:34 by honlee            #+#    #+#             */
/*   Updated: 2020/12/23 11:35:20 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	idx;

	idx = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		if (!(ret = malloc(1)))
			return (NULL);
		ret[0] = 0;
		return (ret);
	}
	if (!(ret = malloc(len + 1)))
		return (NULL);
	while (idx < len)
	{
		ret[idx] = s[start + idx];
		idx++;
	}
	ret[idx] = 0;
	return (ret);
}
