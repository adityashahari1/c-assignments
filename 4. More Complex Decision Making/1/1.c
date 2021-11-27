/*Any year is entered through the keyboard, write a program to
determine whether the year is leap or not. Use the logical operators
&& and ||.*/

# include <stdio.h>

int main(){
    int year;
    printf("Enter an year to check if leap year.\n");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0) || (year%100==0 && year%400==0))
        printf("Leap year\n");
    
    else
        printf("Not a leap year\n");

    return 0;
}
