/*Write a program to produce the following output:*/

# include <stdio.h>

int main(){
    
    int k;
    
    for(int i=1;i>=4;i++)
    {
        for(int j=1;j>=4-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}