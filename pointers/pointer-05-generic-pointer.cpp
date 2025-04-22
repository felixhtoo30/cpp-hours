#include <iostream>
int main()
{
    int a = 1025;
    int *p;
    p = &a; // address of a

    printf("Size of integer is %d bytes\n", sizeof(int)); // 4

    printf("Address = %d, Value = %d\n", p, *p);
    printf("Address = %d, Value = %d\n\n", p + 1, *(p + 1));

    // Void Pointer - Generic Pointer
    void *p0;
    p0 = p;
    printf("Size of char is %d bytes\n", sizeof(char));
    printf("Address = %d, Value = %d\n", p0);
    printf("Address = %d, Value = %d\n", *p0);    // This will cause compilation error
    printf("Address = %d, Value = %d\n", p0 + 1); // This will cause compilation error
}