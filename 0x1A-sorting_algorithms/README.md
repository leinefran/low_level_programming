<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">

# 0x1A. C - Sorting algorithms & Big O

### This project in the Lower Level Programming series is about:


 * Sorting algorithms
 * What is the Big O notation, and how to evaluate the time complexity of an algorithm
 * How to select the best sorting algorithm for a given input
 * What is a stable sorting algorithm

## Requirements

 * Allowed editors: vi, vim, emacs
 * All your files will be compiled on Ubuntu 14.04 LTS
 * Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
 * All your files should end with a new line
 * A README.md file, at the root of the folder of the project is mandatory
 * Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 * You are not allowed to use global variables
 * No more than 5 functions per file
 * Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 * Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
 * In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
 * All your header files should be include guarded
 * A list/array does not need to be sorted if its size is less than 2.
 * For this project you are given the print_array, and print_list functions.


Please use these data structures for this project:

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

---
File|Task
---|---
0-bubble_sort.c | a function that sorts an array of integers in ascending order using the Bubble sort algorithm
1-insertion_sort_list.c | a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
2-selection_sort.c | a function that sorts an array of integers in ascending order using the Selection sort algorithm
3-quick_sort.c | a function that sorts an array of integers in ascending order using the Quick sort algorithm

## Author
Leine Valente