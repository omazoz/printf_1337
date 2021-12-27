/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <omazoz@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 14:09:45 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/25 00:19:04 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# define FLAG_HASH 0
# define FLAG_PLUS 1
# define BASE_BIN "01"
# define BASE_OCT "01234567"
# define BASE_DEC "0123456789"
# define BASE_HEX "0123456789abcdef"
# define BASE_XEH "0123456789ABCDEF"

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putnbr(long long n);
int	ft_putstr(const char *str);
int	ft_putnbr_unsigned(unsigned long long nbr);
int	ft_putnbr_base(unsigned long long n, char *base);
int	ft_put_address(unsigned long n);
int	ft_check_flags(char c, va_list list);
int	ft_handle_format(const char *str, va_list list);

#endif
