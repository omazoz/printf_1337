/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:45:45 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/24 14:24:11 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		len = ft_putstr("-2147483648");
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

/*#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	int num = atoi(argv[1]);
	printf("\nret : %d\n", ft_putnbr(num));
	return (0);
}*/
