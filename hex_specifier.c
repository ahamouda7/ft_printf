/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_specifier.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 17:18:33 by ahamouda          #+#    #+#             */
/*   Updated: 2025/11/30 19:34:45 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex_specifier(int *count, char c, unsigned int a)
{
	ft_putnbr_hex((unsigned int)a, c);
	*count += ft_numlen_hex((unsigned int)a);
}
