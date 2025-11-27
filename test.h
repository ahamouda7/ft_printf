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

#endif