/*Write a function to compute the greatest common divisor given by
Euclid’s algorithm, exemplified for J = 1980, K = 1617 as follows:
1980 / 1617 = 1     1980 – 1 * 1617 = 363
1617 / 363 = 4      1617 – 4 * 363 = 165
363 / 165 = 2       363 – 2 * 165 = 33
5 / 33 = 5          165 – 5 * 33 = 0
Thus, the greatest common divisor is 33.*/

# include <stdio.h>

void gcd(int numerator, int denominator, int*ans);

int main(){
    int j, k;
    int ans;
    printf("Enter two integers:\n");
    scanf("%d%d", &j,&k);

    gcd(j, k, &ans);
    printf("Greatest Common Divisor of %d and %d : %d\n",j,k,ans);

    return 0;
}

void gcd(int numerator, int denominator, int*ans){
    int num, temp;
    if(denominator==0)
    {
        *ans = numerator;
    }
    else if(numerator==0)
    {
        *ans = denominator;
    }
    else
    {   
        num = numerator/denominator;
        temp = numerator - num * denominator;

        while(temp)
        {   
            numerator = denominator;
            denominator = temp;
            num = numerator/denominator;
            temp = numerator - num * denominator;
        }
        *ans = denominator;
    }
}