/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:43:32 by fbarrier          #+#    #+#             */
/*   Updated: 2021/12/08 18:08:28 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putunsigned_fd(long n, int fd)
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
	return (ft_len_nbr_u(lli, 10));
}

int	ft_printu(va_list ap)
{
	size_t	u;
	long	i;
	int		result;

	u = va_arg(ap, int);
	i = 0;
	result = 0;
	if ((int)u < 0)
	{
		i = 4294967296 + (int)u;
		result += ft_putunsigned_fd(i, 1);
	}
	else if ((int)u == 0)
	{
		ft_putchar_fd('0', 1);
		result += 1;
	}
	else
	{
		ft_putnbr_fd(u, 1);
		result += ft_len_nbr_u(u, 10);
	}
	return (result);
}
