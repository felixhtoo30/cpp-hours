#include <iostream>
int main()
{
    int a = 1025;
    int *p;
    p = &a; // address of a

    printf("Size of integer is %d bytes\n", sizeof(int)); // 4

    printf("Address = %d, Value = %d\n", p, *p);
    printf("Address = %d, Value = %d\n\n", p + 1, *(p + 1));

    char *p0;
    p0 = (char *)p;
    printf("Size of char is %d bytes\n", sizeof(char));
    printf("Address = %d, Value = %d\n", p0, *p0);
    printf("Address = %d, Value = %d\n", p0 + 1, *(p0 + 1));

    // 1025 = 00000000 00000000 00000100 00000001
}