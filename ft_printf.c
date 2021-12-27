/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 10:48:26 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/24 22:18:17 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	skip_format(const char *s)
{
	int	index;

	index = 0;
	while (s[index] == '#' || s[index] == '+')
		index++;
	while (s[index] == 'l')
		index++;
	return (index);
}

int	ft_printf(const char *s, ...)
{
	va_list	lst;
	int		i;
	int		size;

	va_start(lst, s);
	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			size += ft_handle_format(s + i, lst);
			i += skip_format(s + i);
		}
		else
			size += ft_putchar(s[i]);
		i++;
	}
	va_end(lst);
	return (size);
}
