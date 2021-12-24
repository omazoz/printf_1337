/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <omazoz@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 13:20:19 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/24 14:25:12 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*#define BASE_BIN "01"
#define BASE_OCT "01234567"
#define BASE_DEC "0123456789"
#define BASE_HEX "0123456789abcdef"*/

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
	int			ret;

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


/*#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	int num = atoi(argv[1]);
	printf("\nret : %d\n", ft_putnbr_base(num, BASE_DEC));
	return (0);
}*/
