/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:14:22 by fbarrier          #+#    #+#             */
/*   Updated: 2021/12/08 18:07:39 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_len_nbr(int nb)
{
	int				result;
	unsigned int	nbr;

	result = 0;
	nbr = 0;
	if (nb < 0)
	{
		nbr = nb * -1;
		result++;
	}
	else if (nb == 0)
		result = 1;
	else
		nbr = nb;
	while (nbr >= 1)
	{
		nbr = nbr / 10;
		result++;
	}
	return (result);
}
