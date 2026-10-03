*This project has been created as part of the 42 curriculum by absafi.*

## Description

**Libft** is the foundational project at 42. The objective is to create a personal C library by re-implementing a set of standard C library functions, along with additional utility functions that will be reused throughout the 42 projects.

This project strengthens core programming fundamentals in C, including low-level memory management, pointer manipulation, string handling, and basic data structures such as linked lists.

## Library Description

The library (`libft.a`) is organized into three main functional categories:

### 1. Libc Functions (Part 1)

Re-implementations of standard C library functions using the `ft_` prefix while following the required prototypes and behavior.

* **Memory & Manipulation:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`, `ft_strdup`
* **Strings:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`
* **Character Checks & Conversions:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`

### 2. Part 2

Utility functions that extend the functionality provided by the standard C library.

* **String Management:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
* **File Descriptors:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Linked List Functions (Part 3)

Functions for creating, manipulating, and managing singly linked lists.

* **Node & List Operations:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions

Clone the repository:

```bash
git clone <repository-url>
cd libft
```

Build the library:

```bash
make
```

This generates the `libft.a` static library.

To use Libft in another project, include `libft.h` and link against `libft.a` when compiling your program.

## Prerequisites

* A C compiler (`cc`)
* `make` utility

## Resources

* Linux manual (`man`)
* *The C Programming Language* — Brian W. Kernighan and Dennis M. Ritchie
* [Makefile Tutorial](https://makefiletutorial.com/)
* [libftTester](https://github.com/Tripouille/libftTester/tree/master)
* **Google Gemini** — used to clarify information not fully covered by the project manual, verify my understanding of Makefile concepts, and provide additional examples.

## Compilation

To compile the library, navigate to the root directory of the repository and run:

```bash
make
```

This will generate the `libft.a` static library.
