/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 23:12:53 by ahamouda          #+#    #+#             */
/*   Updated: 2025/11/30 19:55:14 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_putnbr(long nb);
int		ft_numlen(long n);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_putnbr_hex(unsigned long nbr, char x);
int		ft_numlen_hex(unsigned long n);
void	dicx_specifiers(int *count, char c, int a);
void	u_specifier(int *count, unsigned int a);
void	s_specifier(int *count, char *str);
void	other_specifiers(int *count, char c);
void	p_specifier(int *count, void *p);
void	hex_specifier(int *count, char c, unsigned int a);

#endif