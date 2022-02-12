/*Any year is entered through the keyboard. Write a function to
determine whether the year is a leap year or not.*/

# include <stdio.h>
int leapyear(int);

int main(){
    int x;
    printf("Enter a year to check leap year:\n");
    scanf("%d",&x);

    leapyear(x);
    return 0;
}

int leapyear(int x){
    
    if((x%4==0 && x%100!=0) || x%400==0) 
    {
        return printf("Leap year\n");
    }
    else 
        printf("Not a leap year\n");

}