# Libft - My Custom C Library

## 📖 Description

**Libft** is a custom implementation of standard C library functions, created as part of the 42 curriculum. This project involves recoding essential libc functions, as well as additional utility functions that will be useful throughout the 42 program.

## 🚀 Getting Started

### Compilation

To compile the library, run:

```bash
make
```

This will generate a `libft.a` static library file.

### Usage

Include the header in your C files:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc your_program.c libft.a -o your_program
```

### Makefile Rules

- `make` - Compile the library
- `make clean` - Remove object files
- `make fclean` - Remove object files and the library
- `make re` - Recompile the entire library
- `make bonus` - Compile with bonus functions (linked lists)

---

## 📚 Function Categories

### Part 1 - Libc Functions

Functions from the standard C library, recoded from scratch.

#### Character Checks & Conversions

| **ft_isalpha** | `int ft_isalpha(int c)` | Checks if character is alphabetic (a-z, A-Z) |<br>
| **ft_isdigit** | `int ft_isdigit(int c)` | Checks if character is a digit (0-9) |<br>
| **ft_isalnum** | `int ft_isalnum(int c)` | Checks if character is alphanumeric |<br>
| **ft_isascii** | `int ft_isascii(int c)` | Checks if character is ASCII (0-127) |<br>
| **ft_isprint** | `int ft_isprint(int c)` | Checks if character is printable |<br>
| **ft_toupper** | `int ft_toupper(int c)` | Converts lowercase letter to uppercase |<br>
| **ft_tolower** | `int ft_tolower(int c)` | Converts uppercase letter to lowercase |<br>

#### String Functions

| **ft_strlen** | `size_t ft_strlen(const char *s)` | Calculates the length of a string |<br>
| **ft_strchr** | `char *ft_strchr(const char *s, int c)` | Locates first occurrence of character in string |<br>
| **ft_strrchr** | `char *ft_strrchr(const char *s, int c)` | Locates last occurrence of character in string |<br>
| **ft_strncmp** | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares two strings up to n characters |<br>
| **ft_strnstr** | `char *ft_strnstr(const char *big, const char *little, size_t len)` | Locates substring in string (size-bounded) |<br>
| **ft_strlcpy** | `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | Copies string to destination (size-bounded) |<br>
| **ft_strlcat** | `size_t ft_strlcat(char *dst, const char *src, size_t size)` | Concatenates strings (size-bounded) |<br>
| **ft_strdup** | `char *ft_strdup(const char *s)` | Duplicates a string (allocates memory) |<br>

#### Memory Functions

| **ft_memset** | `void *ft_memset(void *s, int c, size_t n)` | Fills memory with a constant byte |<br>
| **ft_bzero** | `void ft_bzero(void *s, size_t n)` | Sets memory to zero |<br>
| **ft_memcpy** | `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copies memory area |<br>
| **ft_memmove** | `void *ft_memmove(void *dest, const void *src, size_t n)` | Copies memory area (handles overlap) |<br>
| **ft_memchr** | `void *ft_memchr(const void *s, int c, size_t n)` | Locates byte in memory |<br>
| **ft_memcmp** | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares memory areas |<br>
| **ft_calloc** | `void *ft_calloc(size_t nmemb, size_t size)` | Allocates and zeroes memory |<br>

#### Conversion Functions

| **ft_atoi** | `int ft_atoi(const char *nptr)` | Converts string to integer |

---

### Part 2 - Additional Functions

Custom functions not in the standard library but useful for string manipulation.

| **ft_substr** | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Extracts substring from string |<br>
| **ft_strjoin** | `char *ft_strjoin(char const *s1, char const *s2)` | Concatenates two strings (allocates memory) |<br>
| **ft_strtrim** | `char *ft_strtrim(char const *s1, char const *set)` | Trims characters from start and end |<br>
| **ft_split** | `char **ft_split(char const *s, char c)` | Splits string by delimiter into array |<br>
| **ft_itoa** | `char *ft_itoa(int n)` | Converts integer to string |<br>
| **ft_strmapi** | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies function to each character (with index) |<br>
| **ft_striteri** | `void ft_striteri(char *s, void (*f)(unsigned int, char*))` | Applies function to each character (modifies in place) |<br>

#### File Descriptor Functions

| **ft_putchar_fd** | `void ft_putchar_fd(char c, int fd)` | Writes character to file descriptor |<br>
| **ft_putstr_fd** | `void ft_putstr_fd(char *s, int fd)` | Writes string to file descriptor |<br>
| **ft_putendl_fd** | `void ft_putendl_fd(char *s, int fd)` | Writes string + newline to file descriptor |<br>
| **ft_putnbr_fd** | `void ft_putnbr_fd(int n, int fd)` | Writes integer to file descriptor |<br>

---

### Bonus Part - Linked List Functions

Functions to manipulate linked lists (compile with `make bonus`).

#### Linked List Structure

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| **ft_lstnew** | `t_list *ft_lstnew(void *content)` | Creates new list node |<br>
| **ft_lstadd_front** | `void ft_lstadd_front(t_list **lst, t_list *new)` | Adds node at the beginning of list |<br>
| **ft_lstsize** | `int ft_lstsize(t_list *lst)` | Counts number of nodes in list |<br>
| **ft_lstlast** | `t_list *ft_lstlast(t_list *lst)` | Returns last node of list |<br>
| **ft_lstadd_back** | `void ft_lstadd_back(t_list **lst, t_list *new)` | Adds node at the end of list |<br>
| **ft_lstdelone** | `void ft_lstdelone(t_list *lst, void (*del)(void*))` | Deletes node and frees content |<br>
| **ft_lstclear** | `void ft_lstclear(t_list **lst, void (*del)(void*))` | Deletes and frees entire list |<br>
| **ft_lstiter** | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Applies function to each node's content |<br>
| **ft_lstmap** | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Creates new list by applying function to each node |<br>

---

## 📝 Notes

- All functions are protected against segmentation faults
- Memory leaks are handled properly (tested with valgrind)
- Code follows the 42 Norm (norminette)
- No global variables used

## 🧪 Testing

You can test your libft using:
- [libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [Tripouille/libftTester](https://github.com/Tripouille/libftTester)
