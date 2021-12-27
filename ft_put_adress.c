/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_adress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <omazoz@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 13:46:16 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/24 22:18:54 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_address(unsigned long n)
{
	int	ret;

	ret = ft_putstr("0x");
	ret += ft_putnbr_base(n, "0123456789abcdef");
	return (ret);
}
