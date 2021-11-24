/*Write a program to check whether a triangle is valid or not, when
the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180
degrees.*/

# include <stdio.h>

int main(){
    int a, b, c;

    printf("Enter angle 1:\n");
    scanf("%d",&a);

    printf("Enter angle 2:\n");
    scanf("%d",&b);

    printf("Enter angle 3:\n");
    scanf("%d",&c);

    if((a+b+c) == 180)
        printf("Triangle is valid.\n");
    
    else 
        printf("Triangle is not valid.\n");

    return 0;
}
