/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:27:26 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/24 14:38:50 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putstr(const char *str)
{
	int	len;

	if (!str)
		return (ft_putstr("(null)"));
	len = strlen(str);
	if (str)
		write(1, str, len);
	return(len);
}
