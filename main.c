#include "ft_printf.h"
#include <stdio.h>

int main()
{
	// ft_printf("[%d bytes]", ft_printf("%d\n", 2147483647));
	// printf("[%d bytes]", printf("%d\n", 2147483647));

	// ft_printf("[%d bytes]", ft_printf("%i\n", -29));
	// printf("[%d bytes]", printf("%i\n", -29));

	// ft_printf("[%d bytes]", ft_printf("%u\n", -4294967295));
	// printf("[%d bytes]", printf("%u\n", -4294967295));

	// ft_printf("[%d bytes]", ft_printf("%c\n", 'A'));
	// printf("[%d bytes]", printf("%c\n", 'A'));
	
	ft_printf("[%d bytes]\n", ft_printf("%s", NULL));
	printf("[%d bytes]", printf("%s", NULL));

	// ft_printf("[%d bytes]", ft_printf("%x", -10));
	// printf("[%d bytes]", printf("%x", -10));

	// ft_printf("[%d bytes]", ft_printf("%X", -4294967295));
	// printf("[%d bytes]", printf("%X", -4294967295));

	// ft_printf("[%d bytes]\n", ft_printf("%p", NULL));
	// printf("[%d bytes]\n", printf("%p", NULL));

	// ft_printf("[%d bytes]", ft_printf("%y\n", "Anass"));
	// printf("[%d bytes]", printf("%y\n", "Anass"));
}
