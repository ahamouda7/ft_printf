/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda.student@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 23:13:40 by ahamouda          #+#    #+#             */
/*   Updated: 2025/11/27 23:13:40 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_hex(int nb, char x)
{
	char hex[] = "0123456789abcdef";
	char HEX[] = "0123456789ABCDEF";
	// unsigned int	nbr;

	// nbr = (unsigned int)nb;
	if (nb >= 16)
		ft_putnbr_hex(nb / 16, x);
	if (x == 'x')
		ft_putchar(hex[nb % 16]);
	else
		ft_putchar(HEX[nb % 16]);
}