/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda.student@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 23:12:53 by ahamouda          #+#    #+#             */
/*   Updated: 2025/11/27 23:12:53 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_numlen(int n);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void    ft_putnbr_hex(int nb, char x);
int		ft_numlen_hex(int n);

#endif