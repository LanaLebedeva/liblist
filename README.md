# Library for working with lists

## NAME
	liblist - lists library

## SYNOPSIS
	#include "liblist.h"
-------------------------------------------------------------------------------------------------------------------------
	gcc -o <name of executable file> *.o -L./<dir of library> -llist 

## DESCRIPTION
	The main area of application of this library is basic operations on the lists.

## LIST OF FUNCTION
| Function | Description |
|----:|:----|
| ft_lstnew | it allocates and returns a new link | 
| ft_lstdelone | it frees the link’s-content using the function del given as a parameter|
| ft_lstdel | frees the memory from the recieve link to the list end |
| ft_lstadd | Adds the element new at the beginning of the list. |
| ft_lstiter | Iterates the list lst and applies the given function f to each link |
| ft_lstmap | Iterates the list lst and applies the function f to each link |

## CONFORMING TO
	The libbitop library conforms to C99

## ENVIRONMENT
The library was compiled and tested:
gcc (Ubuntu 9.2.1-9ubuntu2) 9.2.1 20191008

## MAKEFILE

	make 		- builds a static library
	make clean 	- deletes files :*.o and *.d
	make fclean	- deletes files	:libbitop.a, *.o and *.d
	make re		- clean all and builds a static library

## ABOUT FUNCTION
	t_list	*ft_lstnew(void const *content, size_t content_size);
	void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
	void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
	void	ft_lstadd(t_list **alst, t_list *new);
	void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
	t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
	
If the function is passed not a pointer to a function, but a pointer to NULL, then the memory is freed through free()

