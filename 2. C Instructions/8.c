/*Two numbers are input through the keyboard into two locations C
and D. Write a program to interchange the contents of C and D.*/

# include <stdio.h>

int main(){
    int a, b;
    int temp;

    printf("Enter two numbers C and D\n");
    scanf("%d %d",&a,&b);

    printf("Before interchanging locations: \nC = %d\nD = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;

    printf("After interchanging locations: \nC = %d\nD = %d",a,b);

    return 0;
}
