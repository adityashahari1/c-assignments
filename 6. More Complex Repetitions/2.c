/*Write a program to fill the entire screen with a smiling face. The
smiling face has an ASCII value 1.*/

# include <stdio.h>

int main(){
    char face = 1;

    for(int i = 1; i<=10; i++)
    {
        for(int j = 1; j<=10; j++)
        {
            printf("%c",face);
        }
        printf("\n");
    }
    
    return 0;
}