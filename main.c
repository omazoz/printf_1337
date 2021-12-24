/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <omazoz@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 14:26:41 by omazoz            #+#    #+#             */
/*   Updated: 2021/12/24 14:35:17 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	printf("ret : %d\n", ft_printf("hello %d %x %s\n", 10, 111, "moul taxi"));
	printf("ret : %d\n", printf("hello %d %x %s\n", 10, 111, "moul taxi"));
	return (0);
}
