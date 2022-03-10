/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 20:50:36 by fbarrier          #+#    #+#             */
/*   Updated: 2021/12/08 18:08:08 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr_base(unsigned long long nbr, char *base)
{
	unsigned long long	m;
	unsigned long long	b;

	m = (unsigned long long)nbr;
	b = (unsigned long long)ft_strlen(base);
	if (m >= b)
	{
		ft_putnbr_base(m / b, base);
		ft_putnbr_base(m % b, base);
	}
	else
		ft_putchar_fd(base[m], 1);
	return (ft_len_nbr_u(nbr, b));
}

int	ft_printp(va_list ap)
{
	unsigned long long	i;
	int					result;

	i = va_arg(ap, unsigned long long);
	result = 0;
	ft_putstr_fd("0x", 1);
	result += (ft_putnbr_base(i, "0123456789abcdef") + 2);
	return (result);
}
