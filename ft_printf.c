/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:21:37 by ahamouda          #+#    #+#             */
/*   Updated: 2025/11/30 19:52:15 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	which_specifier(int *count, char c, va_list args)
{
	if (c == 'd' || c == 'i' || c == 'c')
		dicx_specifiers(count, c, va_arg(args, int));
	else if (c == 'u')
		u_specifier(count, va_arg(args, unsigned int));
	else if (c == 's')
		s_specifier(count, va_arg(args, char *));
	else if (c == 'x' || c == 'X')
		hex_specifier(count, c, va_arg(args, unsigned int));
	else if (c == 'p')
		p_specifier(count, va_arg(args, void *));
	else
		other_specifiers(count, c);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			which_specifier(&count, *format, args);
		}
		else
			other_specifiers(&count, *format);
		format++;
	}
	return (va_end(args), count);
}
