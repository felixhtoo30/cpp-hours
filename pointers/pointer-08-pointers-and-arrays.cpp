#include <iostream>

int main()
{

    int A[] = {5, 8, 9, 11, 21};

    int *p;
    p = A;

    // A++; // invalid
    // p++; // valid

    int x = 5;
    int *q;
    q = &x;

    printf("%d\n", q);          // &x
    printf("%d\n", *q);         // 5
    printf("%d\n\n", *(q + 1)); // ? (Random garbage value)
    printf("=============\n\n");

    printf("A and &A[0] are same. *A and A[0] are same\n");
    printf("----------\n");
    printf("%d\n", A);      // It'll print Address of A[0] (array's initial value by default)
    printf("%d\n", &A[0]);  // It'll print Address of A[0]
    printf("%d\n", *A);     // It'll print Value of A[0] (array's initial value by default)
    printf("%d\n\n", A[0]); // It'll print Value of A[0]
    printf("=============\n\n");

    for (int i = 0; i < 5; i++)
    {
        /** &A[i] is same as A + i */
        printf("&A[i] is same as A + i\n");
        printf("----------\n");
        printf("Address: %d\n", &A[i]);
        printf("Address: %d\n\n", (A + i)); // Array A behaves like pointer cos of this p = A in above;

        /** A[i] is same as *(A + i) */
        printf("A[i] is same as *(A + i)\n");
        printf("----------\n");
        printf("Value: %d\n", A[i]);
        printf("Value: %d\n\n", *(A + i)); // Array A behaves like pointer cos of this p = A in above;
    }
    printf("=============\n\n");
}