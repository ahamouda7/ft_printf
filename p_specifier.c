/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_specifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:58:53 by ahamouda          #+#    #+#             */
/*   Updated: 2025/11/30 19:55:38 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	p_specifier(int *count, void *p)
{
	write(1, "0x", 2);
	ft_putnbr_hex((unsigned long)p, 'x');
	*count += ft_numlen_hex((unsigned long)p) + 2;
}
