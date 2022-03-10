/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:43:34 by fbarrier          #+#    #+#             */
/*   Updated: 2021/12/08 18:07:57 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_cast(char c, va_list ap)
{
	int	result;

	result = 0;
	if (c == 's')
		result += ft_prints(ap);
	else if ((c == 'd') || (c == 'i'))
		result += ft_printdi(ap);
	else if (c == 'u')
		result += ft_printu(ap);
	else if (c == 'c')
		result += ft_printc(ap);
	else if (c == '%')
		result += ft_putchar_fd('%', 1);
	else if (c == 'p')
		result += ft_printp(ap);
	else if (c == 'x')
		result += ft_printx(ap);
	else if (c == 'X')
		result += ft_print_upper_x(ap);
	else
		result = -1;
	va_end(ap);
	return (result);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		result;	

	i = 0;
	result = 0;
	if (!str)
		return (0);
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			result += ft_cast(str[i], ap);
		}
		else
		{
			write(1, &str[i], 1);
			result++;
		}
		i++;
	}
	return (result);
}

/* int	main ()
{
	char 			*str = "felix";
	int				i = -95;
	unsigned int	u = -654;
	char			c = 'w'; 
	int	result = 0;
	int	result2 = 0;
	
	result = ft_printf("hello %s %i %c %u %% %p %X %x",
	 str, i, c, u, &i, i, u);
	printf("\n%d\n", result);
	result2 = printf("hello %s %i %c %u %% %p %X %x",
	 str, i, c, u, &i, i, u);
	printf("\n%d", result2);

	return (0);
}*/

