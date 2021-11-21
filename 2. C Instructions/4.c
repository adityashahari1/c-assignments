/*Write a program to receive Cartesian co-ordinates (x, y) of a point
and convert them into polar co-ordinates (r, t).
Hint: r = sqrt ( x*x + y*y ) and t = tan-1 ( y / x )*/

# include <stdio.h>
# include <math.h>

int main(){
    float x, y, r, a, b, t; 
    const float PI = 3.141592;
    printf("Enter cartesian of x & y:");
    scanf("%f%f",&x,&y);
    
    r = sqrt(x*x + y*y);
                                
    t = atan(y/x);

    t = t * (180.0 / PI);
    
    printf("Polar co-ordinates(r, t) = (%f,%f)",r,t);

    return 0;
}


