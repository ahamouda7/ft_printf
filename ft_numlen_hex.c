/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 23:49:07 by ahamouda          #+#    #+#             */
/*   Updated: 2025/11/30 19:55:23 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numlen_hex(unsigned long n)
{
	int	len;

	len = 0;
	while (n >= 16)
	{
		n /= 16;
		len++;
	}
	if (n < 16)
		len++;
	return (len);
}
