/*Write a program to find the factorial value of any number entered
through the keyboard.*/

# include <stdio.h>

int main(){
    int num, fact = 1;

    printf("Enter a value:\n");
    scanf("%d",&num);

    while(num!=0)
    {
        fact = num*fact;
        num = num - 1;
    }

    printf("Factorial = %d",fact);
    
    return 0;
}
