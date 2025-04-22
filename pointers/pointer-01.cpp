#include <iostream>
int main()
{
    // int a;
    // int *p;
    // p = &a;
    // a = 10;
    // printf("You good? %d\n", p);
    // printf("You good? %d\n", *p);
    // printf("You good? %d\n", &a);

    int a;
    int *p;
    a = 10;
    p = &a; // address of a
    printf("a = %d\n", a);
    *p = 20; // dereferencing
    printf("a = %d\n", a);
}