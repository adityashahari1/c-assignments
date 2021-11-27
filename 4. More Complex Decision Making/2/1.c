/*Write a program to find the greatest of the three numbers entered
through the keyboard. Use conditional operators.*/

# include <stdio.h>

int main (){
    int a, b, c;
    printf("Enter the three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
        printf("%d is the greatest number.\n",a);
    
    else if(b>a && b>c)
        printf("%d is the greatest number.\n",b);
    
    else if(c>a && c>b)
        printf("%d is the greatest number.\n",c);

    else    
        printf("Invalid.\n");

    return 0;
}
