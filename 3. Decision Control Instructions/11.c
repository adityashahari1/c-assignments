/*Given the coordinates (x, y) of center of a circle and its radius, write
a program that will determine whether a point lies inside the circle, 
on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
functions)*/

# include <stdio.h>
# include <math.h>

int main(){ 
    int cx, cy, r, x, y, d;
    printf("Enter the value of (cx, cy):\n");
    scanf("%d%d",&cx,&cy);

    printf("Enter the value of radius:\n");
    scanf("%d",&r);

    printf("Enter the value of (x, y):\n");
    scanf("%d%d",&x,&y);

    d = sqrt(pow(x - cx,2) + pow(y - cy,2));

    if(d>r){
        printf("Point(%d,%d) is outside the circle.\n",x,y);
        }

        else if (d == r){
            printf("Point(%d,%d) is on the circle.\n",x,y);
        }

        else
        {
            printf("Point(%d,%d) is inside the circle.\n",x,y); 
        }

    return 0;
}
