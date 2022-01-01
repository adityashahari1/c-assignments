/*Write a program for a matchstick game being played between the
computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows:
 There are 21 matchsticks.
 The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
 After the person picks, the computer does its picking.
 Whoever is forced to pick up the last matchstick loses the game.*/

# include <stdio.h>

int main(){
    int count = 1, num, temp = 1, sticks = 21;
    printf("There are total %d sticks\n",sticks);

    while(1)
    {   
        
        printf("Enter the number of sticks you want to pick:(1, 2, 3, 4,)\n");
        scanf("%d",&num);

        temp = 5 - num; 
        printf("Computer picks %d sticks.\n",temp);

        sticks = sticks -(num + temp);
        printf("%d sticks remaining\n", sticks);

        if(sticks == 1)
        {
            printf("You lost\n",sticks);
            break;
        }

        count++;
    }

    return 0;
}
