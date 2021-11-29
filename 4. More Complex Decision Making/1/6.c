/*In boxing the weight class of a boxer is decided as per the following
table. Write a program that receives weight as input and prints out
the boxer’s weight class.
Boxer Class             Weight in Pounds
Flyweight               < 115
Bantamweight            115 - 121
Featherweight           122 - 153
Middleweight            154 – 189
Heavyweight             >= 190      */

# include <stdio.h>

int main(){
    int wt;
    printf("Enter weight:\n");
    scanf("%d",&wt);

    if(wt>=190)
        printf("Heavywieght\n");
    
    else if(wt>=154 && wt<=189)
        printf("Middleweight\n");
    
    else if(wt>=122 && wt<=153)
        printf("Featherweight\n");
    
    else if(wt>=115 && wt<=121)
        printf("Bantamweight\n");
    
    else    
        printf("Flyweight\n");

    return 0;
}





