#include <iostream>
#include <string.h>

/**
 * Pass 1D Array
 */
void FuncFor1D(int *A) // Call by Reference
{
}

/**
 * Pass 2D Array
 * Note: Size of 1st dimension can be omitted as just `[]`, but not the size of subsequent dimensions
 * Because when we pass an array to a function, it decays into a pointer to its first element
 */
void FuncFor2D(int A[][3]) // Call by Reference
{
}

/**
 * Pass 3D Array
 */
void FuncFor3D(int (*A)[2][2]) // (*A) = A[]. So, (*A)[2][2] = A[][2][2]
{
}

int main()
{
    /** 2D Arrays */
    int D[2][3];
    int (*r)[3] = D;
    printf("\n------ 2D Arrays ------ \n");
    printf("%d or %d or %d\n", D, *D, D[0]);

    /** 3D Arrays */
    int E[3][2][2] = {{{2, 5}, {7, 9}},
                      {{3, 4}, {6, 1}},
                      {{0, 8}, {11, 13}}};
    printf("\n------ 3D Arrays ------ \n");
    printf("%d or %d or %d \n", E, *E, E[0], &E[0][0]);
    printf("%d \n", *(E[0][1] + 1)); // same as E[0][1][1]

    int X[2] = {1, 2};
    int Y[2][3] = {1, 2, 4};
    int Z[3][2][2] = {2, 5, 7, 9, 3, 4, 6, 1, 0, 8, 11, 13};
    FuncFor1D(X);
    FuncFor2D(Y);
    FuncFor3D(Z);
}