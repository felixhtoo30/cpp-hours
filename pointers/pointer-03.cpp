#include <iostream>
int main()
{
    int a = 9;
    int *p;
    p = &a; // address of a

    printf("Size of integer is %d\n", sizeof(int)); // 4

    printf("Address of P is %d\n", p);     // If p is 2002
    printf("Address of P is %d\n", p + 1); // Then p+1 is 2006
    printf("Address of P is %d\n", p + 2); // Then p+2 is 2010

    printf("Value of P is %d\n", *p);
    printf("Value of P is %d\n", *(p + 1));

    /* It adds 4 bytes to the address of P because size of an int is 4 bytes */
}