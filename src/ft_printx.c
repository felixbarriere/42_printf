/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 22:03:21 by fbarrier          #+#    #+#             */
/*   Updated: 2021/12/08 18:08:32 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr_base_x(long long nbr, char *base)
{
	unsigned long long	m;

	m = nbr;
	if (m > (unsigned long long)ft_strlen(base) - 1)
	{
		ft_putnbr_base_x(m / ft_strlen(base), base);
		ft_putnbr_base_x(m % ft_strlen(base), base);
	}
	else
		ft_putchar_fd(base[m], 1);
	return (ft_len_nbr_u(nbr, ft_strlen(base)));
}

int	ft_printx(va_list ap)
{
	size_t	i;
	int		result;

	i = va_arg(ap, size_t);
	result = 0;
	result += ft_putnbr_base_x((unsigned int)i, "0123456789abcdef");
	return (result);
}
