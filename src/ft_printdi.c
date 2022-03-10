/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:22:10 by fbarrier          #+#    #+#             */
/*   Updated: 2021/12/08 18:07:51 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printdi(va_list ap)
{
	int	di;
	int	result;

	di = va_arg(ap, int);
	ft_putnbr_fd(di, 1);
	result = ft_len_nbr(di);
	return (result);
}
