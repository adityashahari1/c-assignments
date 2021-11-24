/*Write a program to find the absolute value of a number entered
through the keyboard.*/

# include <stdio.h>
# include <stdlib.h>

int main(){
    int n;
    printf("Enter a positive or negative number: \n");
    scanf("%d",&n);

    n = abs(n);

    printf("Absolute value of the number is: %d \n",n);
    return 0;
}
