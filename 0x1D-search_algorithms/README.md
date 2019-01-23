# 0x1D. C - Search Algorithms

### This project in the Lower Level Programming series is about:


 * Search Algorithms
 * Big O notation
 * Space Complexity

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
 * You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.
 * In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
 * All your header files should be include guarded
 * A list/array does not need to be sorted if its size is less than 2.

---
File|Task
---|---
0-linear.c | a function that searches for a value in an array of integers using the Linear search algorithm
1-binary.c | a function that searches for a value in a sorted array of integers using the Binary search algorithm
2-O | answer to the time complexity (worst case) of a linear search in an array of size n
3-O | answer to the space complexity (worst case) of an iterative linear search algorithm in an array of size n
4-O | answer to the time complexity (worst case) of a binary search in an array of size n
5-O | answer to the space complexity (worst case) of a binary search in an array of size n
6-O | the space complexity of this function / algorithm?

---

int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}

---

## Author
Leine Valente
