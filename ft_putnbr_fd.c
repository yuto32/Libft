/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimomu <yshimomu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:13:08 by yshimomu          #+#    #+#             */
/*   Updated: 2022/11/06 12:13:11 by yshimomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write (fd, "-", 1);
			n = -n;
			ft_putnbr_fd (n, fd);
		}
		else if (n < 10)
		{
			n = n + '0';
			write (fd, &n, 1);
		}
		else
		{
			ft_putnbr_fd (n / 10, fd);
			n = (n % 10) + '0';
			write (fd, &n, 1);
		}
	}
}
