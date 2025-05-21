#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int snakeWaterGun(char you, char comp)
{
    // draw condition
    if (you == comp)
    {
        return 0;
    }

    // non-draw condition

    // Snake and Water
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    // Gun & Snake
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
    // Water & Gun
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else
    {
        printf("Enter a valid Input!!");
    }
}

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number <= 33)
    {
        comp = 's';
    }
    else if (number > 33 && number <= 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("Enter 's' for snake, 'w' for warter , 'g' for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you,comp);
    printf("You Chose %c And Computer Chose %c\n",you,comp);
    if(result==0){
        printf("Its a Draw!");
    }
    else if(result==1){
        printf("You Win!!");
    }
    else if(result==-1){
        printf("You Lose!!");
    }
    else{
        printf("Enter a valid Input!!");
    }
    

    getch();
}
