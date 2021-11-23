/*Any integer is input through the keyboard. Write a program to find
out whether it is an odd number or even number.*/

# include <stdio.h>

int main (){
    int n;
    printf("Enter a integer number: ");
    scanf("%d",&n);

    if(n==0)
        printf("Given number is not even nor odd.");

    else if(n%2==0)
        printf("Given number: %d is even number.",n); 
        
    else
        printf("Given number: %d is odd number.",n); 

    return 0;
}
