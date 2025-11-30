#include "ft_printf.h"
#include <stdio.h>

int main()
{
	// ft_printf("%d\n", 2147483647); // correct 100%
	// printf("%d\n", 2147483647);

	// ft_printf("%i\n", -29); // correct 100%
	// printf("%i\n", -29);

	// ft_printf("%u\n", -4294967295); // correct 100%
	// printf("%u\n", -4294967295);

	// ft_printf("%c\n", 'A'); // correct 100%
	// printf("%c\n", 'A');
	
	// ft_printf("%s\n", NULL); // correct 100%
	// printf("%s", NULL);
	
	// ft_printf(" %x \n", 16); // correct 100%
	// printf("[%d bytes]\n", ft_printf(" %x ", -10));
	// printf(" %x ", -10);

	// ft_printf("%X\n", -4294967295); // correct 100%
	// printf("%X\n", -4294967295);

	// ft_printf("%p\n", 0); // correct 100%
	printf("[%d bytes]", ft_printf(" %p %p ", 0, 0));
	// printf("[%d bytes]", printf(" %p %p ", 0, 0));

	// ft_printf("%y\n", "Anass"); // correct 100%
	// printf("%y\n", "Anass");
}