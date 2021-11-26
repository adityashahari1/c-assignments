/*Given a point (x, y), write a program to find out if it lies on the Xaxis,
Y-axis or on the origin.*/

# include <stdio.h>

int main(){
    int x, y;
    printf("Enter (x,y): \n");
    scanf("%d%d",&x,&y);

    if(x == 0 && y== 0)
        printf("x and y lie on the origin.\n");

    else if(x == 0 )
        printf("Point lies on the y-axis.\n");

    else if(y == 0)
        printf("Point lies on the x-axis.\n");

    else 
        printf("Point neither lies on x-axis nor on y-axis.\n");
                 
    return 0;
}
