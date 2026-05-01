# ft_printf

A custom implementation of the C standard library's `printf` function, created as part of the 42 school curriculum.

## Overview

`ft_printf` is a lightweight recreation of the standard C `printf` function that outputs formatted text to the standard output. It supports a variety of format specifiers and handles variable argument lists using `stdarg.h`.

## Features

The implementation supports the following format specifiers:

| Specifier | Description                      |
| --------- | -------------------------------- |
| `%d`      | Decimal integer (signed)         |
| `%i`      | Integer (signed)                 |
| `%u`      | Unsigned decimal integer         |
| `%x`      | Hexadecimal integer (lowercase)  |
| `%X`      | Hexadecimal integer (uppercase)  |
| `%c`      | Single character                 |
| `%s`      | String                           |
| `%p`      | Pointer address (in hexadecimal) |
| `%%`      | Literal percent sign             |

## Project Structure

```
ft_printf/
├── ft_printf.c          # Main printf implementation
├── ft_printf.h          # Header file with function declarations
├── dic_specifiers.c     # Handlers for %d, %i, %c specifiers
├── hex_specifier.c      # Handlers for %x, %X specifiers
├── u_specifier.c        # Handler for %u specifier
├── s_specifier.c        # Handler for %s specifier
├── p_specifier.c        # Handler for %p specifier
├── other_specifiers.c   # Handler for %% and other characters
├── ft_putchar.c         # Character output utility
├── ft_putstr.c          # String output utility
├── ft_putnbr.c          # Number output utility
├── ft_putnbr_hex.c      # Hexadecimal number output utility
├── ft_strlen.c          # String length utility
├── ft_numlen.c          # Decimal number length utility
├── ft_numlen_hex.c      # Hexadecimal number length utility
├── Makefile             # Build configuration
└── README.md            # This file
```

## Compilation

### Build the library

```bash
make
```

This will compile all source files and create the `libftprintf.a` static library.

### Clean object files

```bash
make clean
```

Removes all `.o` object files.

### Full clean

```bash
make fclean
```

Removes all `.o` files and the `libftprintf.a` library.

### Rebuild

```bash
make re
```

Performs a full clean and rebuild.

## Usage

Include the header file in your C program:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "World");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    return (0);
}
```

### Function Signature

```c
int ft_printf(const char *format, ...);
```

**Parameters:**

- `format`: Format string with optional format specifiers
- `...`: Variable arguments corresponding to format specifiers

**Returns:**

- Number of characters printed (excluding the null terminator)

### Example Usage

```c
ft_printf("Integer: %d\n", 42);           // Output: Integer: 42
ft_printf("String: %s\n", "hello");       // Output: String: hello
ft_printf("Char: %c\n", 'A');             // Output: Char: A
ft_printf("Unsigned: %u\n", 123);         // Output: Unsigned: 123
ft_printf("Hex lower: %x\n", 255);        // Output: Hex lower: ff
ft_printf("Hex upper: %X\n", 255);        // Output: Hex upper: FF
ft_printf("Pointer: %p\n", &var);         // Output: Pointer: 0x7ffc...
ft_printf("Percent: %%\n");               // Output: Percent: %
```

## Compilation Flags

The Makefile uses the following compiler flags for strict C standards compliance:

- `-Wall`: Enable all warnings
- `-Wextra`: Enable extra warnings
- `-Werror`: Treat warnings as errors

## Author

Created by ahamouda as a 42 school project.

## Notes

- This is an educational implementation and may not include all features of the standard `printf`
- The function handles basic format specifiers as required by the 42 curriculum
- Error handling is minimal to focus on core functionality
