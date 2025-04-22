#include <iostream>
int main()
{
    int x = 5;
    int *p;
    p = &x;
    int **q;
    q = &p;
    int ***r;
    r = &q;

    printf("Value of x is %d\n", *p);
    printf("Address of x is %d\n", &x);
    printf("Value of p (Address of x) is %d\n", p);
    printf("Address of p is %d \n", &p);

    printf("Value of q (Address of p) is %d\n", q);
    printf("Value of *q (value of p) is %d\n", *q);
    printf("Value of **q (*q => p, *p => x) is %d\n", **q);
    printf("Address of q is %d \n", &q);

    printf("Value of r is %d\n", r);
    printf("Value of *r (value of q) is %d\n", *r);
    printf("Address of r is %d\n", &r);
}