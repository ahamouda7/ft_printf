/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 23:13:40 by ahamouda          #+#    #+#             */
/*   Updated: 2025/11/28 19:17:04 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex(unsigned long nbr, char x)
{
	char			*hex;
	char			*up_hex;

	hex = "0123456789abcdef";
	up_hex = "0123456789ABCDEF";
	if (nbr >= 16)
		ft_putnbr_hex(nbr / 16, x);
	if (x == 'x')
		ft_putchar(hex[nbr % 16]);
	else
		ft_putchar(up_hex[nbr % 16]);
}
