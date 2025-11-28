/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 23:49:07 by ahamouda          #+#    #+#             */
/*   Updated: 2025/11/28 19:18:24 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numlen_hex(unsigned long n)
{
	int	len;

	len = 0;
	if (n < 16)
		return (1);
	while (n >= 16)
	{
		n /= 16;
		len++;
	}
	return (len);
}
