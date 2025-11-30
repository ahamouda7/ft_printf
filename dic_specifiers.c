/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dicx_specifiers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:36:42 by ahamouda          #+#    #+#             */
/*   Updated: 2025/11/28 19:08:03 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	dicx_specifiers(int *count, char c, int a)
{
	if (c == 'd' || c == 'i')
	{
		ft_putnbr((long)a);
		*count += ft_numlen((long)a);
	}
	else if (c == 'c')
	{
		ft_putchar((char)a);
		(*count)++;
	}
}
