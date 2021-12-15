/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 18:42:54 by honlee            #+#    #+#             */
/*   Updated: 2020/12/21 18:50:24 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putnbr_to_fd(unsigned int n, int fd)
{
	char		c;

	if (n / 10 != 0)
		ft_putnbr_to_fd(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}

void			ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_to_fd(n * (-1), fd);
	}
	else if (n == 0)
	{
		write(fd, "0", 1);
	}
	else
	{
		ft_putnbr_to_fd(n, fd);
	}
}
