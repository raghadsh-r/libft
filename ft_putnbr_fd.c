/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 12:46:05 by ralshraw          #+#    #+#             */
/*   Updated: 2026/09/30 10:32:46 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(int nb, int fd)
{
	char	b;

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
	}
	b = (nb % 10) + '0';
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, fd);
	}
	write(fd, &b, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr(n, fd);
}

/*int main()
{
	ft_putnbr_fd(33,1);
}*/
