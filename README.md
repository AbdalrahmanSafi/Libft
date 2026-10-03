*This project has been created as part of the 42 curriculum by absafi.*

# Libft

## Description

**Libft** is the foundational project at 42 Amman. The goal of this project is to create a personal C library by re-implementing a set of standard C library functions, as well as developing additional utility functions that will be reused throughout the 42 projects.

The project focuses on strengthening fundamental C programming skills, including memory management, pointer manipulation, string handling, dynamic memory allocation, file descriptor operations, and singly linked lists.

The final result is a static library named `libft.a` containing all implemented functions.

## Library Description

The library is organized into three main parts.

### Part 1 — Libc Functions

Re-implementations of standard C library functions using the `ft_` prefix.

**Memory & Manipulation**

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`
* `ft_calloc`
* `ft_strdup`

**String Functions**

* `ft_strlen`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_strchr`
* `ft_strrchr`
* `ft_strnstr`
* `ft_strncmp`

**Character Checks & Conversions**

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_toupper`
* `ft_tolower`
* `ft_atoi`

### Part 2 - Additional Functions

Additional utility functions for string manipulation, number conversion, and output through file descriptors.

**String Management**

* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_itoa`
* `ft_strmapi`
* `ft_striteri`

**File Descriptors**

* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

### Part 3 — Linked List Functions

Functions for creating, manipulating, and managing linked lists.

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

## Instructions

### Compilation

A C compiler and `make` are required.

To compile the library, navigate to the root directory of the repository and run:

```bash
make
```

This generates the static library:

```text
libft.a
```

The library can then be linked with other C projects together with the provided `libft.h` header.

For example:

```bash
cc main.c libft.a
```

The project also provides the following Makefile targets:

```bash
make
make all
make clean
make fclean
make re
```

## Prerequisites

* A C compiler (`cc`)
* `make`
* Linux or another Unix-like environment

## Resources

* Linux manual pages (`man`)
* *The C Programming Language* — Brian W. Kernighan and Dennis M. Ritchie
* [Makefile Tutorial](https://makefiletutorial.com/)
* [libftTester](https://github.com/Tripouille/libftTester/tree/master)

### AI Usage

**Google Gemini** was used as a supplementary learning and verification tool during the project.

It was used for:

* Clarifying concepts and information that were not fully explained in the 42 project manual.
* Checking my understanding of `Makefile` concepts and syntax.
* Providing additional examples to reinforce my understanding of C concepts.
* Reviewing my reasoning about memory management, pointers, and function behavior.