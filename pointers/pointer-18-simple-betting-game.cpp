#include <iostream>
#include <string.h>

#include <math.h>

int cash = 100;

void Play(int bet)
{
    /** Using normal variable (Stack) */
    // char C[] = {'J', 'Q', 'K'};

    /** Using malloc (Heap) and Test for Memory Leak */
    char *C = (char *)malloc(10000 * sizeof(char));
    C[0] = 'J';
    C[1] = 'Q';
    C[2] = 'K';

    printf("Shuffling ... \n");
    srand(time(NULL)); // seeding random number generator

    int i;
    for (int i = 0; i < 5; i++)
    {
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp; // swap characters at position x and y
    }

    int playerGuess;
    printf("What is the position of queen - 1, 2 or 3? \n");
    scanf("%d", &playerGuess);
    if (C[playerGuess - 1] == 'Q')
    {
        cash += 3 * bet;
        printf("You Win! Result = \"%c %c %c\". Cash = %d \n", C[0], C[1], C[2], cash);
    }
    else
    {
        cash -= bet;
        printf("You Lose! Result = \"%c %c %c\". Cash = %d \n", C[0], C[1], C[2], cash);
    }

    /** Freeing memory to avoid memory leak */
    free(C);
}

int main()
{
    int bet;
    while (cash > 0)
    {
        printf("What is your bet? $");
        scanf("%d", &bet);
        if (bet == 0 || bet > cash)
            break;
        else
            Play(bet);
    }
}