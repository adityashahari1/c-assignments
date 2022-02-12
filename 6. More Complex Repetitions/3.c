/*Write a program to add first seven terms of the following series
using a for loop:
1/1!  +  2/2!+  3/3! +...*/

# include <stdio.h>

int main(){
    float sum =0, fact;

    for(int i = 1; i<=7; i++)
    {   
        fact =1;
        
        for(int j = 1; j<=i; j++)
        {
            fact = j*fact;
        }
        sum = sum + (i/fact);
    }

    printf("Sum of the series: %f",sum);
    return 0;
}