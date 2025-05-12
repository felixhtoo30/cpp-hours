#include <iostream>
#include <string.h>

#include <math.h>

void Play(int bet)
{
    char C[] = {'J', 'Q', 'K'};
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

    // int playerGuess
    // ...Here...

}

int cash = 100;
int main()
{
    int bet;
    while (cash > 0)
    {
        printf("What is your bet? $ \n");
        scanf("%d", &bet);
        if (bet == 0 || bet > cash)
            break;
        else
            Play(bet);
    }
}