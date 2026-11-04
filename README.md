*This project has been created as part of the 42 curriculum by sojadiri.*

## Description 

**Libft** is an individual project at 42 focused on building our own C library. It serves as a core toolkit that will be reused throughout the rest of our 42 curriculum.

The project is divided into three main parts:
1. **Libc Functions:** Re-implementation of standard C library functions.
2. **Additional Functions:** Custom utility functions for string manipulation, memory allocation, and file descriptors.
3. **Linked List Functions:** Operations to create, manage, and manipulate singly linked lists.

## Detailed Library Description

### 1. Character Checks & Conversion (`<ctype.h>` equivalents)
* **`ft_isalpha`**: Checks for an alphabetic character (a-z and A-Z).
* **`ft_isdigit`**: Checks for a digit (0-9).
* **`ft_isalnum`**: Checks for an alphanumeric character (letters or digits).
* **`ft_isascii`**: Checks whether a character fits into the ASCII character set (0-127).
* **`ft_isprint`**: Checks for any printable character (including spaces).
* **`ft_toupper`**: Converts a lowercase letter to uppercase.
* **`ft_tolower`**: Converts an uppercase letter to lowercase.

### 2. Memory Manipulation (`<string.h>` & `<stdlib.h>` equivalents)
* **`ft_memset`**: Fills a block of memory with a specific byte value.
* **`ft_bzero`**: Sets a block of memory to zero bytes.
* **`ft_memcpy`**: Copies a memory area (dest and src must not overlap).
* **`ft_memmove`**: Copies a memory area safely, handling overlapping memory regions correctly.
* **`ft_memchr`**: Scans memory for the first occurrence of a specific byte.
* **`ft_memcmp`**: Compares two memory blocks byte by byte.
* **`ft_calloc`**: Allocates memory dynamically and initializes all bytes to zero.

### 3. String Manipulation & Examination
* **`ft_strlen`**: Computes the length of a null-terminated string.
* **`ft_strlcpy`**: Size-bounded string copy preventing buffer overflows.
* **`ft_strlcat`**: Size-bounded string concatenation.
* **`ft_strchr`**: Locates the first occurrence of a character in a string.
* **`ft_strrchr`**: Locates the last occurrence of a character in a string.
* **`ft_strncmp`**: Compares two strings up to a specified number of characters.
* **`ft_strnstr`**: Locates a substring within a string, up to a maximum length.
* **`ft_atoi`**: Converts a string representation of a number into an integer.
* **`ft_strdup`**: Creates a newly allocated duplicate of a string.

### 4. Additional & Utility Functions (Non-Standard)
* **`ft_substr`**: Extracts a substring from a given string starting from a specified index.
* **`ft_strjoin`**: Concatenates two strings into a newly allocated string.
* **`ft_strtrim`**: Trims specified leading and trailing characters from a string.
* **`ft_split`**: Splits a string into an array of strings using a delimiter character.
* **`ft_itoa`**: Converts an integer into a newly allocated string representation.
* **`ft_strmapi`**: Applies a function to each character of a string, creating a new string.
* **`ft_striteri`**: Applies a function to each character of a string in place, passing its index.

### 5. File Descriptor Output Functions
* **`ft_putchar_fd`**: Writes a single character to the specified file descriptor.
* **`ft_putstr_fd`**: Writes a string to the specified file descriptor.
* **`ft_putendl_fd`**: Writes a string followed by a newline to the specified file descriptor.
* **`ft_putnbr_fd`**: Writes an integer to the specified file descriptor.

### 6. Linked List Functions
* **`ft_lstnew`**: Allocates and returns a new list node.
* **`ft_lstadd_front`**: Adds a node to the beginning of a linked list.
* **`ft_lstsize`**: Counts the number of nodes in a linked list.
* **`ft_lstlast`**: Returns the last node of a linked list.
* **`ft_lstadd_back`**: Adds a node to the end of a linked list.
* **`ft_lstdelone`**: Frees a single node's memory using a custom content-deletion function.
* **`ft_lstclear`**: Deletes and frees all nodes in a linked list starting from a given node.
* **`ft_lstiter`**: Iterates through a linked list and applies a function to each node's content.
* **`ft_lstmap`**: Iterates through a list, applies a function to each node, and creates a fresh resulting list.

## Instructions

To compile the library, run the `Makefile`:

```bash
# Compile all functions (including linked lists)
make

# Remove object files
make clean

# Remove object files and the compiled library (libft.a)
make fclean

# Re-compile everything
make re
```

## Usage

1. Include libft.h in your C source files:
```bash
#include "libft.h"
```

2. Compile your source files and link with libft.a:
```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

3. Run your program
```bash
./program
```

## Resources

1. Standard C library Manual Pages (man) for function prototypes and expected behaviors.
2. Peer learning and collaborative debugging with fellow students at 1337
3. [Makefile tutorials for C/C++ developers](https://makefiletutorial.com/)
4. AI Tools: Used strictly for concept clarity, understanding memory allocation edge cases (such as overlapping memory in `ft_memmove`), and logic breakdown for complex linked-list pointer manipulations. AI was not used to directly generate or copy final submission code.
