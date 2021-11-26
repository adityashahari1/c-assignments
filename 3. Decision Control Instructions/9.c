/*Given the length and breadth of a rectangle, write a program to find
whether the area of the rectangle is greater than its perimeter. For
example, the area of the rectangle with length = 5 and breadth = 4
is greater than its perimeter.*/

# include <stdio.h>

int main(){
    int l, b, a, p;

    printf("Enter length of rectangle:\n");
    scanf("%d",&l);
    
    printf("Enter breadth of rectangle:\n");
    scanf("%d",&b);

    a = l*b;
    p = 2 * (l+b);

    if(a > p)
         printf("The area of the rectangle with length =%d and breadth =%d is greater than its perimeter %d.\n",l,b,p);
    
    else
        printf("ERRoR 404\n");
        
    return 0;
}
