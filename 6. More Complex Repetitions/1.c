/*Write a program to print all prime numbers from 1 to 300. (Hint:
Use nested loops, break and continue)*/

# include <stdio.h>

int main(){

    int prime;

    for(int i = 2; i<=300; i++)
    {
        for(int j = 2; j<i; j++)
        {
            prime = 1;
            if(i%j == 0)
            {   
                prime = 0;
                break;
            }
        }

        if(prime)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}