/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 10:48:26 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/24 14:35:52 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	lst;
	int		i;
	int	size;
	va_start(lst, s);

	i = 0;
	size = 0;
	while(s[i])
	{
		if (s[i] == '%')
		{
			i++;
			size += ft_check_flags(s[i], lst);
		}
		else
			size +=  ft_putchar(s[i]);
		i++;
	}
	va_end(lst);
	return (size);
}

