#include <iostream>
#include <string.h>

void printFunc(char *C)
{
    // int i = 0;
    // while (C[i] != '\0')
    // {
    //     printf("%c ", C[i]);
    //     i++;
    // }

    // OR

    while (*C != '\0')
    {
        printf("%c ", *C);
        C++;
    }
}

int main()
{
    char C[5];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0'; // Null character (Null terminator) to mark the end of the string
    int lengthOfC = strlen(C);
    printf("C = %s and length = %d\n", C, lengthOfC);

    char CH[] = "JOHN";
    int lengthOfCH = strlen(CH);
    printf("CH = %s, length = %d, size in bytes = %d\n", CH, lengthOfCH, sizeof(CH));

    /** 2) Arrays and Pointers are different types that are used in similar manner */
    char C1[] = "HELLO";
    char *C2;
    C2 = C1; // C2 = C1 is valid, but C1 = C2 is not valid
    // C1 = C2; Wrong
    // C1 = C1 + 1; Wrong
    // C2++; Correct

    C2[0] = 'A';
    printf("C1 = %s, C2 = %c\n", C1, C2[1]); // C2[1] or *(C2 + 1) ... Both are same ...

    /** 3) Arrays are always passed to functions by reference */
    char C3[20] = "HELLO";
    printFunc(C3);
    printf("==========\n");
}