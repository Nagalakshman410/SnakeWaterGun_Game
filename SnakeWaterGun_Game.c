#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int SnakeWaterGun(char you, char comp){
    if(you == comp){
        return 0;
    }

    else if((you == 'S' && comp == 'W') || (you == 'W' && comp == 'G') || (you == 'G' && comp == 'S') ){
        return 1;
    }

    else{
        return -1;
    }
}

int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;
    
    if(number<33){
        comp = 'S';
    }

    else if (number<66)
    {
        comp = 'W';
    }

    else{
        comp = 'G';
    }
    

    printf("Enter 'S' for Snake, 'W' for Water, 'G' for Gun: \n");
    scanf("%c", &you);

    int result = SnakeWaterGun(you, comp);

    if (result == 0){
        printf("Game Draw!\n");
    }

    else if(result == 1){
        printf("You win!!!\n");
    }

    else{
        printf("You Lost!\n");
    }

    printf("You chose %c and the computer chose %c\n", you, comp);

    return 0;
}