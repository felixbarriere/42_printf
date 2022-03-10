/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_nbr_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:46:26 by fbarrier          #+#    #+#             */
/*   Updated: 2021/12/08 18:07:35 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_len_nbr_u(unsigned long long nb, int base)
{
	unsigned long long	result;

	result = 0;
	if (nb == 0)
		result = 1;
	while (nb)
	{
		nb = nb / base;
		result++;
	}
	return (result);
}
