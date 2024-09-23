# Libft

## Description

`libft` is a custom C library that re-implements a set of standard C library functions. The project was undertaken at École 42 as a way to deepen understanding of C programming, memory management, and various standard algorithms. The library is designed to be modular, efficient, and serve as a foundation for future projects.

## Features

This library includes the following key functions:

### Part I: Standard C Library Functions

- **Character Checks and Conversions**:
  - `ft_isalpha`: Checks for alphabetic characters.
  - `ft_isdigit`: Checks for digit characters.
  - `ft_isalnum`: Checks for alphanumeric characters.
  - `ft_isascii`: Checks for ASCII characters.
  - `ft_isprint`: Checks for printable characters.
  - `ft_toupper`: Converts a character to uppercase.
  - `ft_tolower`: Converts a character to lowercase.

- **Memory and String Manipulation**:
  - `ft_strlen`: Calculates the length of a string.
  - `ft_memset`: Fills memory with a constant byte.
  - `ft_bzero`: Zeros out a block of memory.
  - `ft_memcpy`: Copies memory area.
  - `ft_memmove`: Moves memory area, handling overlap.
  - `ft_memchr`: Searches for a byte in memory.
  - `ft_memcmp`: Compares memory areas.
  - `ft_strdup`: Duplicates a string.
  - `ft_strcpy`, `ft_strlcat`, `ft_strlcpy`: Copies and concatenates strings.
  - `ft_atoi`: Converts a string to an integer.

- **String Search and Manipulation**:
  - `ft_strchr`, `ft_strrchr`: Locate a character in a string.
  - `ft_strncmp`: Compares two strings.
  - `ft_strnstr`: Locates a substring in a string.

### Part II: Custom Functions

- **Dynamic Memory Management**:
  - `ft_calloc`: Allocates memory and zeroes it out.
  - `ft_substr`: Extracts a substring from a string.
  - `ft_strjoin`: Joins two strings.
  - `ft_strtrim`: Trims leading and trailing characters from a string.
  - `ft_split`: Splits a string into an array using a delimiter.

- **Other Utility Functions**:
  - `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Output functions to write to file descriptors.
  - `ft_itoa`: Converts an integer to a string.
  - `ft_strmapi`: Applies a function to each character of a string.
  - `ft_striteri`: Iterates over a string with index.

### Bonus Part: Linked List Functions

This part implements the following linked list operations using a custom `t_list` structure:
- `ft_lstnew`: Creates a new list element.
- `ft_lstadd_front`: Adds an element at the beginning of a list.
- `ft_lstadd_back`: Adds an element at the end of a list.
- `ft_lstsize`: Returns the size of the list.
- `ft_lstlast`: Returns the last element of a list.
- `ft_lstdelone`: Deletes an element and frees its memory.
- `ft_lstclear`: Deletes all elements in a list and frees their memory.
- `ft_lstiter`: Iterates over each element and applies a function.
- `ft_lstmap`: Creates a new list by applying a function to each element of an existing list.

## Compilation and Usage

You can compile the library using the provided `Makefile`. To generate the `libft.a` library file, simply run:

```bash
make
```

This will produce the libft.a static library, which you can include in your own C projects.

For the bonus part, run:
```bash
make bonus
```

## Project Structure
- `src/`: Contains the source files (`.c` files).
- `include/`: Contains the header file `libft.h`.
- `Makefile`: Used for compiling the library and bonus part.

## How to Use

Once compiled, include the libft.h header in your project and link the libft.a file during the compilation of your own code:
```c
#include "libft.h"
```

Compile with your project using the static library:
```bash
gcc -Wall -Wextra -Werror -L. -lft my_program.c -o my_program
```

## Author

Project developed by [Emin A.](https://github.com/emayia) as part of the École 42 curriculum.