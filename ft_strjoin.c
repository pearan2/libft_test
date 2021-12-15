/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 14:43:49 by honlee            #+#    #+#             */
/*   Updated: 2020/12/22 15:35:10 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	size_t		idx;
	char		*ret;

	idx = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(ret = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (*s1)
	{
		ret[idx] = *s1;
		s1++;
		idx++;
	}
	while (*s2)
	{
		ret[idx] = *s2;
		s2++;
		idx++;
	}
	ret[idx] = 0;
	return (ret);
}
