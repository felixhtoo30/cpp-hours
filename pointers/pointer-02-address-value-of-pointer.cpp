#include <iostream>
int main()
{
    int a;
    int *p;
    a = 10;
    p = &a; // address of a
    printf("Address of a (p) is %d\n", p);
    printf("Value of a (*p) is %d\n", *p);
    int b = 33;
    *p = b;
    // Will the A ddress in p change to point b?
    printf("Address of a (p) is %d\n", p); // Address not changed and still points to a
    printf("Value of a (*p) is %d\n", *p);  // Value changed to 33
}