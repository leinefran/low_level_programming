<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">

# 0x16. C - Doubly linked lists


## Synopsis
This project introduces the concept of doubly linked lists in C Programming.

### What students should learn from this project

At the end of this project we are expected to be able to explain to anyone, without the help of Google:
- What is a doubly linked list
- How to use doubly linked lists
- Start to look for the right source of information without too much help

### Resources
https://www.geeksforgeeks.org/doubly-linked-list/

### Project Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with `gcc 4.8.4` (`C90`) using the flags `-Wall -Werror -Wextra and -pedantic`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [`betty-style.pl`](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [`betty-doc.pl`](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, `printf` and `exit`. 
- The prototypes of all your functions should be included in your header file called lists.h
- Don't forget to push your header file
- All your header files should be include guarded
- Please use this data structure for this project:

```C
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Project Breakdown
File # | Task
---: | --- |
0-print_dlistint.c | prints all the elements of a dlistint_t list
1-dlistint_len.c | a function that returns the number of elements in a linked dlistint_t list
2-add_dnodeint.c | a function that adds a new node at the beginning of a dlistint_t list
3-add_dnodeint_end.c | a function that adds a new node at the end of a dlistint_t list
4-free_dlistint.c | a function that free a dlistint_t list
5-get_dnodeint.c | a function that returns the nth node of a dlistint_t linked list
6-sum_dlistint.c | a function that returns the sum of all the data (n) of a dlistint_t linked list
7-insert_dnodeint.c | a function that inserts a new node at a given position
8-delete_dnodeint.c | a function that deletes the node at index index of a dlistint_t linked list

## Author
Leine Valente