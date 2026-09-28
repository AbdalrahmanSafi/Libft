*This project has been created as part of the 42 curriculum by absafi.*

## Description
**Libft** is the foundational project at 42 Amman. The objective is to design a personal C library by re-coding a set of standard C library functions, along with additional utility functions that will be reused throughout the rest of the 42 cursus. 

This project strengthens core programming fundamentals in C, low-level memory management, pointer manipulation, and basic data structures (singly linked lists).

## Library Description
The library (`libft.a`) is organized into three main functional categories:

1. **Libc Functions (Part 1):** Re-implementations of standard C library functions, keeping the exact same prototypes and behaviors prefixed with `ft_`.
   * *Memory & Manipulation:* `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`, `ft_strdup`
   * *Strings:* `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`
   * *Character Checks & Conversions:* `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`

2. **Additional Functions (Part 2):** Helper functions either missing from the standard library or provided in a more convenient format.
   * *String Management:* `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
   * *File Descriptors:* `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

3. **Linked Lists Funcitons (part 3):** Functions designed to handle dynamic memory allocation via singly linked lists.
   * *Node & List Operations:* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_iter`, `ft_lstmap`

## Instructions
* git clone from the repo
* Use `make` to generate  `libft.a`
* copy the `libft.h` and `libft.a` in your main to test and use it

### Prerequisites
* A C compiler `cc`
* `make` utility

### Resources
* Linux manual
* The C programming language by Dennis Ritchie
* Makefile by tutorial: https://makefiletutorial.com/
* **Google gemini** as an AI LLM tool, used for get the missed information by the manual & to check my understanding the principals of Makefile and to get extra Examples
### Compilation
To compile the library, navigate to the root directory of the repository and run:
```bash
make
