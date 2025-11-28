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
	// printf("%s\n", NULL);

	// ft_printf("%x\n", 4294967295); // correct 100%
	// printf("%x\n", 4294967295);

	// ft_printf("%X\n", -4294967295); // correct 100%
	// printf("%X\n", -4294967295);

	ft_printf("%p\n", "Anass"); // correct 100%
	printf("%p\n", "Anass");

	// ft_printf("%y\n", "Anass"); // correct 100%
	// printf("%y\n", "Anass");
}