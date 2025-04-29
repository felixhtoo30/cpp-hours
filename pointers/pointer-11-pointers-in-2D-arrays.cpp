#include <iostream>
#include <string.h>

int main()
{
    int B[2][3] = {{1, 2, 3}, {4, 5, 6}}; /* In it, B[0] & B[1] are 1D arrays of 3 integers */
    int (*p)[3];                          /* In it, p is a pointer to 1D array of 3 integers */
    p = B;

    /** These are the same */
    printf("%d or %d\n", B, &B[0]);
    printf("%d or %d\n", *B, B[0], B[0][0]);

    /** These are the same */
    printf("%d or %d\n", B + 1, &B[1]);
    printf("%d or %d\n", *(B + 1), B[1], &B[1][0]);

    /** These are the same */
    printf("%d or %d or %d \n", *(B + 1) + 2, B[1] + 2, &B[1][2]);

    /** For 2D arrays,
     * B[i][j]
     * = *(B[i] + j)
     * = *(*B + i) + j)
     */
    printf("%d \n", *(*B + 1));
}