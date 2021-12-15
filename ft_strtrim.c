/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 15:58:54 by honlee            #+#    #+#             */
/*   Updated: 2020/12/22 17:43:37 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				ft_is_cont(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t			ft_get_start(const char *src, const char *set)
{
	size_t		ret;

	ret = 0;
	while (src[ret] != 0)
	{
		if (ft_is_cont(src[ret], set) == 0)
			return (ret);
		ret++;
	}
	return (ret);
}

static size_t			ft_get_end(const char *src, const char *set)
{
	size_t		ret;

	ret = ft_strlen(src) - 1;
	while (ret >= 0)
	{
		if (ft_is_cont(src[ret], set) == 0)
			return (ret);
		if (ret == 0)
			return (ret);
		ret--;
	}
	return (ret);
}

char					*ft_strtrim(const char *src, const char *set)
{
	size_t		s;
	size_t		e;
	char		*ret;
	size_t		idx;

	if (src == NULL)
		return (NULL);
	if (src[0] == 0)
		return (ft_calloc(1, 1));
	s = ft_get_start(src, set);
	e = ft_get_end(src, set);
	if (s > e)
		return (ft_calloc(1, 1));
	if (!(ret = malloc(e - s + 2)))
		return (NULL);
	idx = 0;
	while (s + idx <= e)
	{
		ret[idx] = src[s + idx];
		idx++;
	}
	ret[idx] = 0;
	return (ret);
}
