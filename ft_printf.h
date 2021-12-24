/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <omazoz@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 14:09:45 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/24 14:24:30 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(const char *str);
int	ft_putnbr_unsigned(unsigned long long  nbr);
int	ft_putnbr_base(unsigned long long n, char *base);
int	ft_put_address(unsigned long n);
int	ft_check_flags(char c, va_list list);

#endif
