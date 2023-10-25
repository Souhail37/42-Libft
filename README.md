# 42-Libft
42-Cursus : Libft
# libft - Your Own C Library

## Description
**libft** is a custom C library that contains a collection of useful functions. It's designed to be a valuable tool for my programming journey. These functions replicate and extend some of the functionality found in the C standard library, providing me with a strong foundation for my projects.

## Table of Contents
- [Part 1 - Libc Functions](#part-1-libc-functions)
- [Part 2 - Additional Functions](#part-2-additional-functions)
- [Bonus Part](#bonus-part)


## Part 1 - Libc Functions
In this part, I must recreate a set of functions from the C standard library, but with a `ft_` prefix. These functions must have the same prototypes and behaviors as their standard counterparts. Here are the functions to implement:

- isalpha
- isdigit
- isalnum
- isascii
- isprint
- strlen
- memset
- bzero
- memcpy
- memmove
- strlcpy
- strlcat
- toupper
- tolower
- strchr
- strrchr
- strncmp
- memchr
- memcmp
- strnstr
- atoi
- calloc
- strdup

## Part 2 - Additional Functions
In this section, I'll create functions that are not part of the C standard library or are provided in a different form. These functions may be useful when implementing the Part 1 functions:

- `ft_substr`: Allocate and return a substring from a given string.
- `ft_strjoin`: Concatenate two strings and return a new one.
- `ft_strtrim`: Remove specified characters from the beginning and end of a string.
- `ft_split`: Split a string into an array of substrings using a specified delimiter.
- `ft_itoa`: Convert an integer to a string.
- `ft_strmapi`: Apply a function to each character in a string.
- `ft_striteri`: Apply a function to each character in a string with an index.
- `ft_putchar_fd`: Output a character to a specified file descriptor.
- `ft_putstr_fd`: Output a string to a specified file descriptor.
- `ft_putendl_fd`: Output a string followed by a newline to a specified file descriptor.
- `ft_putnbr_fd`: Output an integer to a specified file descriptor.

## Bonus Part
In this part, I'll implement linked list functions:

- `ft_lstnew`: Create a new list node.
- `ft_lstadd_front`: Add a node to the front of a list.
- `ft_lstsize`: Count the number of nodes in a list.
- `ft_lstlast`: Get the last node in a list.
- `ft_lstadd_back`: Add a node to the end of a list.
- `ft_lstdelone`: Delete a single node.
- `ft_lstclear`: Delete and free all nodes in a list.
- `ft_lstiter`: Apply a function to each node in a list.
- `ft_lstmap`: Apply a function to each node and create a new list.
