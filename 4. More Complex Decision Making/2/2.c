/*Write a program to receive value of an angle in degrees and check
whether sum of squares of sine and cosine of this angle is equal to
1.*/

# include <stdio.h>
# include <math.h>

int main(){
    float angle, radian, temp;
    float pi = 3.1423;

    printf("Enter angle in degrees:\n");
    scanf("%f",&angle);

    radian = angle * (180/pi);
    temp = pow(sin(radian),2) + pow(cos(radian),2);

    if(temp == 1)
        printf("Sum = 1.\n");
    
    else
        printf("Sum != 1.\n");

    return 0;
}
