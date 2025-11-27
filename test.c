#include "test.h"
#include <stdio.h>

// cspdiuxX%
int	ft_printf(const char *format, ...)
{
	int		i;
	int		a;
	char	*str;
	int		count;

    va_list	args;
    va_start(args, format);

	i = 0;
    count = 0;
    while (format[i])
    {
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd')
			{
				a = va_arg(args, int);
				ft_putnbr(a);
				count += ft_numlen(a);
			}
			else if (format[i] == 'c')
			{
				ft_putchar((char)va_arg(args, int));
				count += 1;
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				ft_putstr(str);
				count += ft_strlen(str);
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
	printf("\n%d", count);
	return (count);
}

int main()
{
	ft_printf("%s\n%d\n%c", "Anass", 29, 'A');
}