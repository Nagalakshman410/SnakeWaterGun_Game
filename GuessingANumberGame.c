#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    int number, guess, numberOfGuesses=1;
    srand(time (0));

    number = rand()%100+1;

    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);

        if(guess > number)
        {
            printf("Guess a little lower number\n");
        }

        else if(guess < number)
        {
            printf("Guess a little higher number\n");
        }

        else
        {
            printf("Hurray!! you guessed correct!!!");
            printf("You took %d attempts", numberOfGuesses);
        }

        numberOfGuesses++;

    } while (guess != number);

    return 0; 
    
}