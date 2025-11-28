/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_specifier.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:36:49 by ahamouda          #+#    #+#             */
/*   Updated: 2025/11/28 16:53:45 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	s_specifier(int *count, char *str)
{
		ft_putstr(str);
		*count += ft_strlen(str);
}
