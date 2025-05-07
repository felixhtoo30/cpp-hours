#include <iostream>
#include <string.h>

void PrintHello(char *name)
{
    printf("Hello %s \n", name);
}

int Add(int a, int b)
{
    return a + b;
}

int main()
{
    int c;
    /**
     * pointer function that should take
     * (int, int) as argument/parameter and return int
     */
    int (*p)(int, int);
    /**
     * (*p)(int, int) !== *p(int, int)
     * (*p)(int, int) is Function pointer
     * *p(int, int) is Function which will return pointer
     *  */

    // Syntax 1
    p = &Add;
    c = (*p)(2, 3);

    // OR

    // Synatax 2, same as Syntax 1
    p = Add;     // Function name will return as pointer
    c = p(2, 3); // de-referencing and executing the function

    printf("%d \n", c);

    void (*q)(char *);
    q = PrintHello;
    q("Bro");
}