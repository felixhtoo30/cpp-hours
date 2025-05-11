#include <iostream>
#include <string.h>

#include <math.h>

void A()
{
    printf("Hello world \n");
}

void B(void (*p)()) // function pointer as argument
{
    p(); // callback function that "p" points to
}

int compare(int a, int b)
{
    // // ASC
    // if (a > b)
    //     return 1;
    // else
    //     return -1;

    // DESC
    if (a < b)
        return 1;
    else
        return -1;
}

int absolute_compare(int a, int b)
{
    if (abs(a) > abs(b))
        return 1;
    else
        return -1;
}

void BubbleSort(int *C, int n, int (*compare)(int, int))
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (compare(C[j], C[j + 1]) > 0)
            {
                temp = C[j];
                C[j] = C[j + 1];
                C[j + 1] = temp;
            }
        }
    }
}

int q_compare(const void *a, const void *b)
{
    int A = *((int *)a);
    int B = *((int *)b);

    /**
     * If A is higher than B, 
     * eg. 2 - 1 = 1 (return positive value (> 0). it will swap)
     * 
     * If B is higher than A,
     * eg. 1 - 2 = -2 (return negative value (< 0) and it won't swap)
     * 
     * So, A - B is ASC logic.
     * (B - A will be DESC logic)
     */
    return A - B; 
}

int main()
{
    // Statement 1
    void (*p)() = A;
    B(p);
    // OR
    // Statement 2, same as Statement 1
    B(A);

    // Usecase 1
    int i, C[] = {2, 1, 5, 4, 6, 3};
    BubbleSort(C, 6, compare);
    for (i = 0; i < 6; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n\n");

    // Usecase 2
    int j, D[] = {-31, 2, -1, 4, -26, 8};
    BubbleSort(D, 6, absolute_compare);
    for (j = 0; j < 6; j++)
    {
        printf("%d ", D[j]);
    }
    printf("\n\n");

    // Usecase 3
    int k, Q[] = {-30, 3, 5, -7, 28, -41};
    qsort(Q, 6, sizeof(int), q_compare);
    for (k = 0; k < 6; k++)
    {
        printf("%d ", Q[k]);
    }
    printf("\n\n");
}