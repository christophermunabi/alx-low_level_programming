#ifndef MAIN_H
#define MAIN_H

/* Include necessary libraries */
#include <stdio.h>
#include <stdlib.h

/* Define constants */
#define MAX_ARRAY_SIZE 100

/* Function prototypes */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

/* Data structures */
typedef struct {
    int x;
    int y;
} Point;

/* Other declarations */
extern int global_variable;

#endif /* MAIN_H */
