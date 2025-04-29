#include <iostream>
#include <string.h>

int main()
{
    /** 2D Arrays */
    int D[2][3];
    int (*r)[3] = D;
    printf("\n------ 2D Arrays ------ \n");
    printf("%d or %d or %d\n", D, *D, D[0]);

    /** 3D Arrays */
    int E[3][2][2] = {{{2, 5}, {7, 9}},
                      {{3, 4}, {6, 1}},
                      {{0, 8}, {11, 13}}};
    printf("\n------ 3D Arrays ------ \n");
    printf("%d or %d or %d \n", E, *E, E[0], &E[0][0]);
    printf("%d \n", *(E[0][1] + 1)); // same as E[0][1][1]
}