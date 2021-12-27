/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <omazoz@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 13:20:19 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/25 00:23:45 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	base_len(char *base)
{
	int	l;

	l = 0;
	while (base[l])
		l++;
	return (l);
}

int	ft_putnbr_base(unsigned long long nbr, char *base)
{
	unsigned long long	i;
	unsigned int		l;
	int					ret;

	ret = 0;
	l = base_len(base);
	i = nbr;
	if (i < l)
	{
		ret += ft_putchar(base[i]);
		return (ret);
	}
	ret += ft_putnbr_base(i / l, base);
	ret += ft_putchar(base[i % l]);
	return (ret);
}
