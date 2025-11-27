/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda.student@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 23:12:48 by ahamouda          #+#    #+#             */
/*   Updated: 2025/11/27 23:12:48 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_printf(const char *format, ...)
{
	int		i;
	int 	a;
	char	*str;
	int		count;

	va_list args;
	va_start(args, format);

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i' || format[i] == 'u')
			{
				a = va_arg(args, int);
				ft_putnbr(a);
				count += ft_numlen(a);
			}
			if (format[i] == 'c')
			{
				ft_putchar((char)va_arg(args, int));
				count += 1;
			}
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				ft_putstr(str);
				count += ft_strlen(str);
			}
			if (format[i] == '%')
			{
				ft_putchar('%');
				count++;
			}
			if (format[i] == 'x' || format[i] == 'X')
			{
				a = va_arg(args, int);
				ft_putnbr_hex(a, format[i]);
				count += ft_numlen_hex(a);
			}
			if (format[i] == 'p')
			{

			}
		}
		else
		{
			ft_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	// printf("%d\n", count);
	return (count);
}

int main()
{
	char	*str = "Anass";
	// ft_printf("%p\n", str);
	printf("%p\n", str);
}