# Libft
Libft is a custom C library that re-implements standard C library functions and provides additional utility functions for string manipulation, memory management, linked lists, and more.
> This is my 42 **libft** project: rewriting core libc functions from scratch to gain a deeper understanding of pointers, memory, and string handling—plus building a small, consistent toolkit I can reuse.
---

## Directory Structure

```
libft/
├── Makefile
├── libft.h
└── ft_*.c         

```

---

## Build

```bash
# Build libft.a
make

# Clean object files
make clean

# Clean everything
make fclean

# Rebuild from scratch
make re
```

---

## Using the Library

1. Include the header:

   ```c
   #include "libft.h"
   ```
2. Link the static library when compiling:

   ```bash
   cc your_code.c -L. -lft -I. -o your_program
   ```

   or in a Makefile:

   ```make
   LIBFT_DIR = ./libft
   LIBFT_A   = $(LIBFT_DIR)/libft.a

   your_program: $(OBJ) $(LIBFT_A)
   	$(CC) $(CFLAGS) $(OBJ) $(LIBFT_A) -I$(LIBFT_DIR) -o $@
   ```

---

## Function Reference

Below is a compact overview of each function implemented in this project. Prototypes are available in `libft.h`.

### Character checks & conversions

* `ft_isalpha(int c)` – Alphabetic? (`A-Z`/`a-z`)
* `ft_isdigit(int c)` – Decimal digit?
* `ft_isalnum(int c)` – Alphanumeric?
* `ft_isascii(int c)` – 7-bit ASCII?
* `ft_isprint(int c)` – Printable (including space)?
* `ft_toupper(int c)` – Lowercase → uppercase; else unchanged
* `ft_tolower(int c)` – Uppercase → lowercase; else unchanged

### Memory

* `ft_memset(void *s, int c, size_t n)` – Fill memory with byte `c`
* `ft_bzero(void *s, size_t n)` – Set memory to zero
* `ft_memcpy(void *dst, const void *src, size_t n)` – Copy `n` bytes (no overlap)
* `ft_memmove(void *dst, const void *src, size_t len)` – Safe copy with overlap
* `ft_memchr(const void *s, int c, size_t n)` – Find first byte `c` in first `n` bytes
* `ft_memcmp(const void *s1, const void *s2, size_t n)` – Lexicographic byte compare
* `ft_calloc(size_t count, size_t size)` – Allocate zeroed block (`count*size`)

### Strings

* `ft_strlen(const char *s)` – Length (excluding `'\0'`)
* `ft_strlcpy(char *dst, const char *src, size_t dstsize)` – Safe copy with truncation
* `ft_strlcat(char *dst, const char *src, size_t dstsize)` – Safe append with truncation
* `ft_strchr(const char *s, int c)` – First occurrence of char `c`
* `ft_strrchr(const char *s, int c)` – Last occurrence of char `c`
* `ft_strncmp(const char *s1, const char *s2, size_t n)` – Compare up to `n` chars
* `ft_strnstr(const char *hay, const char *need, size_t len)` – Find substring within `len`
* `ft_strdup(const char *s1)` – Heap duplicate of string
* `ft_atoi(const char *str)` – Convert to `int` (handles leading spaces, `+`/`-`)

### String allocation/helpers

* `ft_substr(char const *s, unsigned int start, size_t len)` – Allocate substring
* `ft_strjoin(char const *s1, char const *s2)` – Concatenate into new string
* `ft_strtrim(char const *s1, char const *set)` – Trim chars in `set` from both ends
* `ft_split(char const *s, char c)` – Split by delimiter `c` → `char **`
* `ft_itoa(int n)` – Integer to newly allocated string
* `ft_strmapi(char const *s, char (*f)(unsigned int, char))` – Map chars → new string
* `ft_striteri(char *s, void (*f)(unsigned int, char*))` – In-place iteration with index

### I/O helpers

* `ft_putchar_fd(char c, int fd)` – Write char to file descriptor
* `ft_putstr_fd(char const *s, int fd)` – Write string
* `ft_putendl_fd(char const *s, int fd)` – Write string + newline
* `ft_putnbr_fd(int n, int fd)` – Write integer (decimal)

### Linked list API (`t_list`)

All list functions operate on this node type:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

* `ft_lstnew(void *content)` – Create a new node
* `ft_lstadd_front(t_list **lst, t_list *new)` – Push at head
* `ft_lstadd_back(t_list **lst, t_list *new)` – Append at tail
* `ft_lstsize(t_list *lst)` – Count nodes
* `ft_lstlast(t_list *lst)` – Get last node
* `ft_lstdelone(t_list *lst, void (*del)(void*))` – Free one node (content via `del`)
* `ft_lstclear(t_list **lst, void (*del)(void*))` – Free entire list
* `ft_lstiter(t_list *lst, void (*f)(void *))` – Apply `f` to each content
* `ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` – Map to a **new** list; cleans up on failure

---

