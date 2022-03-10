/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:11:48 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/24 10:11:48 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	lli;

	lli = n;
	if (lli < 0)
	{
		ft_putchar_fd('-', fd);
		lli = -lli;
	}
	if (lli > 9)
	{
		ft_putnbr_fd(lli / 10, fd);
		ft_putchar_fd((lli % 10) + '0', fd);
	}
	else
		ft_putchar_fd(lli + '0', fd);
}
