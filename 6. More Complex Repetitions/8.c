/*When interest compounds q times per year at an annual rate of
r % for n years, the principal p compounds to an amount a as per
the following formula
a = p ( 1 + r / q ) nq
Write a program to read 10 sets of p, r, n & q and calculate the
corresponding as.*/

# include <stdio.h>
# include <math.h>
# include <conio.h>

int main(){

    float principle, rate, time, ci, amount;

    for(int i = 1; i<=10; i++)
    {
        printf("Set %d\n",i);

        printf("Enter Principle:\n");
        scanf("%f",&principle);

        printf("Enter Rate:\n");
        scanf("%f",&rate);

        printf("Enter time(in year)\n");
        scanf("%f",&time);

        printf("Enter Compound Interest:\n");
        scanf("%f",&ci);

        amount = principle*(pow((1+rate/ci), ci*time));
        printf("Amount: %f\n\n",amount);
    }

    return 0;
}