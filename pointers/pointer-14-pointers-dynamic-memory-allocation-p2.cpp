#include <iostream>
#include <string.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    // int *A = (int *)malloc(n * sizeof(int)); // dynamically allocated array
    // // int *A = (int *)calloc(n, sizeof(int)); // dynamically allocated array

    // for (int i = 0; i < n; i++)
    // {
    //     A[i] = i + 1;
    // }
    // free(A);
    // // A[2] = 6; // Value at address A+2
    // // A = NULL;
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", A[i]);
    // }
    // printf("\n");

    int *C = (int *)malloc(n * sizeof(int)); // dynamically allocated array
    for (int i = 0; i < n; i++)
    {
        C[i] = i + 1;
    }
    // int *D = (int *)realloc(C, 2 * n * sizeof(int));   // double the size of existing array
    int *D = (int *)realloc(C, (n / 2) * sizeof(int)); // half the size of existing array
    // int *D = (int *)realloc(C, 0);                  // equivalent to free(C)
    // int *D = (int *)realloc(NULL, n * sizeof(int)); // equivalent to malloc()
    printf("Prev block address = %d, new address = %d \n", C, D);
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", D[i]);
    }
    // free(C);
}