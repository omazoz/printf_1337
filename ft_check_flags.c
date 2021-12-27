/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:11:04 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/25 02:10:04 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_check_length_modifiers(const char *str, va_list list)
{
	int		index;
	char	c;

	index = 0;
	while (str[index] == 'l')
		index++;
	c = str[index];
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(list, long)));
	if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(list, unsigned long)));
	if (c == 'x')
		return (ft_putnbr_base(va_arg(list, unsigned long), BASE_HEX));
	if (c == 'X')
		return (ft_putnbr_base(va_arg(list, unsigned long), BASE_XEH));
	if (c == 'o')
		return (ft_putnbr_base(va_arg(list, unsigned long), BASE_OCT));
	if (c == 'b')
		return (ft_putnbr_base(va_arg(list, unsigned long), BASE_BIN));
	return (0);
}

static int	ft_handle_flags(const char *str, unsigned char flags[2])
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] == 'l')
		i++;
	if (flags[FLAG_HASH])
	{
		if (str[i] == 'x' || str[i] == 'X')
			res += ft_putstr("0x");
		else if (str[i] == 'o')
			res += ft_putstr("0");
	}
	return (res);
}

int	ft_handle_format(const char *str, va_list list)
{
	int				result;
	int				index;
	unsigned char	flags[2];

	result = 0;
	index = 0;
	while (str[index] == '#' || str[index] == '+')
	{
		if (str[index] == '#')
			flags[FLAG_HASH] = 1;
		else if (str[index] == '+')
			flags[FLAG_PLUS] = 1;
		index++;
	}
	result += ft_handle_flags(str + index, flags);
	if (str[index] == 'l')
		result += ft_check_length_modifiers(str + index, list);
	else
		result += ft_check_flags(str[index], list);
	return (result);
}

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
		return (ft_putnbr_base(va_arg(list, unsigned int), BASE_HEX));
	if (c == 'p')
		return (ft_put_address(va_arg(list, unsigned long)));
	if (c == 'X')
		return (ft_putnbr_base(va_arg(list, unsigned int), BASE_XEH));
	if (c == 'o')
		return (ft_putnbr_base(va_arg(list, unsigned int), BASE_OCT));
	if (c == 'b')
		return (ft_putnbr_base(va_arg(list, unsigned int), BASE_BIN));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
