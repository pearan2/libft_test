/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 17:46:38 by honlee            #+#    #+#             */
/*   Updated: 2020/12/21 18:15:32 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_get_size(int n)
{
	size_t			ret;
	unsigned int	nbr;

	nbr = n < 0 ? n * (-1) : n;
	ret = n < 0 ? 1 : 0;
	while (nbr / 10 != 0)
	{
		ret++;
		nbr = nbr / 10;
	}
	ret++;
	return (ret);
}

char				*ft_itoa(int n)
{
	size_t			ret_size;
	char			*ret;
	size_t			idx;
	unsigned int	nbr;

	idx = 1;
	ret_size = ft_get_size(n);
	if (!(ret = malloc(ret_size + 1)))
		return (NULL);
	nbr = n < 0 ? n * (-1) : n;
	if (n < 0)
		ret[0] = '-';
	ret[ret_size] = 0;
	while (nbr / 10 != 0)
	{
		ret[ret_size - idx] = (nbr % 10) + '0';
		idx++;
		nbr = nbr / 10;
	}
	ret[ret_size - idx] = nbr + '0';
	return (ret);
}
