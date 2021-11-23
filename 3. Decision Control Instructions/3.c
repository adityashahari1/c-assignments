/*Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.*/

# include <stdio.h>

int main(){
    int n;
    printf("Enter an year: ");
    scanf("%d",&n);

    if(n%4==0)
    {
        if(n%100==0)
        {
            if(n%400==0)
            {
                printf("Year %d is a leap year.",n);
            }
            else
                printf("Year %d is not a leap year.",n);
        }
        else    
            printf("Year %d is a leap year.",n);
    }
    else
        printf("Year %d is not a leap year.",n);

    return 0;
}
