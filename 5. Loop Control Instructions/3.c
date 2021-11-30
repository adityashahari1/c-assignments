/*Two numbers are entered through the keyboard. Write a program
to find the value of one number raised to the power of another.*/

# include <stdio.h>
# include <math.h>

int main(){
    int a, b, c;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);

    //a = pow(a,b);
    //printf("%d",a);

    c = 1;

    while(b!=0)
    {
        c = c*a;
        b = b-1;
    }

    printf("%d",c);
    return 0;
}
