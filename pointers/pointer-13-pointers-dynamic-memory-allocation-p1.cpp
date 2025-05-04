#include <iostream>
#include <string.h>

int main()
{
    int *p;
    p = new int; // Dynamic memory allocation
    *p = 10;
    printf("Value of p is %d\n", *p);
    delete p; // Dynamic memory deallocation

    // malloc
    int *q = (int *)malloc(3 * sizeof(int)); // Typecasting required
    *q = 2;                                  // *q same as q[0]
    *(q + 1) = 3;                            // *(q+1) same as q[1]

    printf("q = %d\n", q);
    printf("*q = %d\n", *q);
    printf("*(q+1) = %d\n", *(q + 1));

    free(q); // Free the memory allocated by malloc.
}