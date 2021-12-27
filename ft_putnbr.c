/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:45:45 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/25 00:24:08 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long long n)
{
	int	len;

	len = 0;
	if (n == LLONG_MIN)
		len = ft_putstr("-9223372036854775808");
	else
	{
		if (n < 0)
		{
			len += ft_putchar('-');
			n = n * -1;
		}
		if (n > 9)
			len += ft_putnbr(n / 10);
		len += ft_putchar('0' + n % 10);
	}
	return (len);
}
