#include <iostream>
#include <string.h>

void PrintHelloWorld()
{
    printf("Hello World \n");
}

int Add(int *a, int *b) // Called function
{
    printf("Address of 'a' in Add = %d \n", &a);
    printf("Value of 'a' in Add (Address of 'a' in main) = %d \n", a);
    printf("Value at address stored in 'a' of Add = %d \n", *a);
    int c = *a + *b;
    return c;
}

int *AddWithPointerFromStack(int *a, int *b)
{
    int c = *a + *b;
    return &c;
}

int *AddWithPointerFromHeap(int *a, int *b)
{
    int *c = (int *)malloc(sizeof(int));
    *c = *a + *b;
    return c;
}

int main() // Calling function
{
    int a = 2, b = 4;
    printf("Address of 'a' in main = %d \n", &a);

    int c = Add(&a, &b);
    printf("Result = %d \n\n", c);

    /**
     * &a and &b passed from main() to AddWithPointerFromStack() is ok ✅
     * But, &c returned from AddWithPointerFromStack() to PrintHelloWorld() is NOT ok ❌
     * Because, PrintHelloWorld() will be executed before AddWithPointerFromStack()
     * &c is not there anymore
     */
    int *d = AddWithPointerFromStack(&a, &b);
    PrintHelloWorld();
    printf("Result = %d \n\n", *d); // *d is not guaranteed to be 6 because &c is not there anymore after PrintHelloWorld() function called

    /**
     * c returned from AddWithPointerFromHeap() to PrintHelloWorld() is fine now
     * Because the address of c this time comes from Heap
     */
    int *e = AddWithPointerFromHeap(&a, &b);
    PrintHelloWorld();
    printf("Result = %d \n\n", *e);
}