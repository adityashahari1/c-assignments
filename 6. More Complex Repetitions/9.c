/* The natural logarithm can be approximated by the following series.
(pg 114)
If x is input through the keyboard, write a program to calculate the
sum of first seven terms of this series.*/

# include <stdio.h>
# include <math.h>

int main(){

    float x, result;
    printf("Enter the value of x:\n");
    scanf("%f",&x);

    for(int i = 1; i<=7; i++)
    {
        if(i==1)
        {
            result = (x -1)/x;
        }

        else
        {
            result = result + pow ((x - 1)/x ,i) * 0.5;
        }
    }

    printf("Result of first 7 terms : %f",result);
    return 0;
}