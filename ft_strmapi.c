/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 18:17:15 by honlee            #+#    #+#             */
/*   Updated: 2020/12/22 13:51:24 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *str,
						char (*f)(unsigned int, char))
{
	char		*ret;
	size_t		idx;

	idx = 0;
	if (str == NULL || f == NULL)
		return (NULL);
	if (!(ret = malloc(ft_strlen(str) + 1)))
		return (NULL);
	while (str[idx] != 0)
	{
		ret[idx] = f(idx, str[idx]);
		idx++;
	}
	ret[idx] = 0;
	return (ret);
}
