
```markdown
# Search Algorithms

This project implements two search algorithms: linear search and binary search. The goal of these algorithms is to search for a given value in an array of integers. The project includes the implementation of both algorithms, along with corresponding Big O analysis and example usage.

## Table of Contents

- [Linear Search](#linear-search)
- [Binary Search](#binary-search)
- [Big O Analysis](#big-o-analysis)

## Linear Search

The linear search algorithm sequentially searches for a given value in an array. It iterates through each element of the array and compares it with the target value until a match is found or the end of the array is reached. If the value is found, the algorithm returns the index of the first occurrence. Otherwise, it returns -1.

### Prototype

```c
int linear_search(int *array, size_t size, int value);
```

### Example Usage

```c
int main(void)
{
    int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));

    return 0;
}
```

## Binary Search

The binary search algorithm is a more efficient searching technique for sorted arrays. It repeatedly divides the search range in half by comparing the target value with the middle element of the array. If the target value matches the middle element, the algorithm returns the index. Otherwise, it narrows down the search range by comparing the target value with the middle element and continues the process until the value is found or the search range becomes empty.

### Prototype

```c
int binary_search(int *array, size_t size, int value);
```

### Example Usage

```c
int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));

    return 0;
}
```

## Big O Analysis

This project also includes an analysis of the time and space complexities for the implemented search algorithms.

- **Linear Search:**
  - Time Complexity (worst case): O(n)
  - Space Complexity (worst case): O(1)

- **Binary Search:**
  - Time Complexity (worst case): O(log n)
  - Space Complexity (worst case): O(1)

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
- All files should end with a new line.
- Your code should use the Betty style. It will be

 checked using betty-style.pl and betty-doc.pl.
- You are not allowed to use global variables.
- No more than 5 functions are allowed per file.
- You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, etc., is forbidden.
- The prototypes of all your functions should be included in the `search_algos.h` header file.
- Your code must be compiled using the following command:
  ```
  gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <main_file.c> <algorithm_file.c> -o <output_file>
  ```
- The main.c files provided in the examples are for testing purposes only. They won't be taken into account during the evaluation.
