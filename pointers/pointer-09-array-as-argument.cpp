#include <iostream>

int SumofElements(int *A, int size) // int A[] or int *A ... it's is same ...
{
    int i, sum = 0;

    printf("SOE - Size of A = %d, Size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    for (i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}

void Double(int *A, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        /** 'A' is passed by reference.
         * So, if you change the value of A[i], it will change in main as well */
        A[i] = 2 * A[i];
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]); // 20 / 4 = 5 (Each int value has 4 bytes. 5 items * 4 bytes = 20)
    printf("Main - Size of A = %d, Size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    printf("==========\n\n");
    int total = SumofElements(A, size);
    printf("Sum of Elements = %d\n", total);
    printf("==========\n\n");

    Double(A, size);
    printf("A Array's Double values are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n==========\n\n");
}