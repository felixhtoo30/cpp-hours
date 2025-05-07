#include <iostream>
#include <string.h>

void A()
{
    printf("Hello world \n");
}

void B(void (*p)()) // function pointer as argument
{
    p(); // callback function that "p" points to
}

void BubbleSort(int *C, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (C[j] > C[j + 1])
            {
                temp = C[j];
                C[j] = C[j + 1];
                C[j + 1] = temp;
            }
        }
    }
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
    BubbleSort(C, 6);
    for (i = 0; i < 6; i++)
    {
        printf("%d ", C[i]);
    }
}