/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:58:02 by fbarrier          #+#    #+#             */
/*   Updated: 2021/12/08 17:58:03 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdint.h>
# include <stddef.h>

int		ft_printf(const char *str, ...);
int		ft_prints(va_list ap);
int		ft_printdi(va_list ap);
int		ft_printc(va_list ap);
int		ft_printu(va_list ap);
int		ft_printp(va_list ap);
int		ft_printx(va_list ap);
int		ft_print_upper_x(va_list ap);
void	ft_putnbr_fd(int n, int fd);
int		ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_strlen(char *str);
int		ft_len_nbr(int nb);
int		ft_len_nbr_u(unsigned long long nb, int base);

#endif