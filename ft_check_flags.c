/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:11:04 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/24 14:42:52 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_check_flags(char c, va_list list)
{
	if (c == 'c')
		return (ft_putchar(va_arg(list, int)));
	if (c == 's')
		return (ft_putstr(va_arg(list, const char *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(list, int)));
	if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(list, unsigned int)));
	if (c == 'x')
		return (ft_putnbr_base(va_arg(list, unsigned int), "0123456789abcdef"));
	if (c == 'p')
		return (ft_put_address(va_arg(list, unsigned long)));
	if (c == 'X')
		return (ft_putnbr_base(va_arg(list, unsigned int), "0123456789ABCDEF"));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
