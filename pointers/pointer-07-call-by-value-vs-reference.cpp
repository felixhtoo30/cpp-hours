#include <iostream>

void IncrementByValue(int a) // Call by Value
{
    a = a + 1;
    printf("Address of a in IncrementByValue is %d\n", &a);
    printf("Value of a in IncrementByValue is %d\n\n", a);
    printf("---------\n\n");
}

void IncrementByAddress(int *p) // Call by Reference
{
    *p = (*p) + 3;
    printf("Address of a (p) in IncrementByAddress (Reference) is %d\n", p);
    printf("Value of a (*p) in IncrementByAddress (Reference) is %d\n\n", *p);
    printf("---------\n\n");
}

int main()
{
    int a;
    a = 10;
    IncrementByValue(a); // Call by Value
    printf("Address of a in main is %d\n", &a);
    printf("Value of a in main is %d\n", a);
    printf("(See: Call by value, a is not incremented in main)\n\n");
    printf("=========\n\n");

    IncrementByAddress(&a); // Call by Reference
    printf("Address of a in main is %d\n", &a);
    printf("Value of a in main is %d\n", a);
    printf("(See: Call by reference, a is also incremented in main)\n\n");
    printf("=========\n\n");
}