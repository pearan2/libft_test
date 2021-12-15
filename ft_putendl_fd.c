/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 18:39:20 by honlee            #+#    #+#             */
/*   Updated: 2020/12/22 14:02:26 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putendl_fd(char *str, int fd)
{
	size_t		idx;

	idx = 0;
	if (str == NULL)
		return ;
	while (str[idx] != 0)
	{
		write(fd, &str[idx], 1);
		idx++;
	}
	write(fd, "\n", 1);
}
