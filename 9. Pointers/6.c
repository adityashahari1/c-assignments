/*Write a function to compute the distance between two points and
use it to develop another function that will compute the area of the
triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
these functions to develop a function which returns a value 1 if the
point (x, y) lines inside the triangle ABC, otherwise returns a value
0.*/

# include <stdio.h>
# include <math.h>

void calf(float x1, float x2, float x3, float y1, float y2, float y3, float x, float y, float *area, int *flag);
float distance(float x1, float x2, float y1, float y2);
float calarea(float a, float b, float c);
int position( float area, float A, float B, float C);

int main(){
    float x1, x2, x3, y1, y2, y3, x, y, area;
    int flag = 0;

    printf("Enter (x1, y1) coordinates\n");
    scanf("%f%f",&x1,&y1);

    printf("Enter (x2, y2) coordinates\n");
    scanf("%f%f",&x2,&y2);

    printf("Enter (x3, y3) coordinates\n");
    scanf("%f%f",&x3,&y3);

    printf("Enter (x, y) coordinates to check if the point lies inside the triangle\n");
    scanf("%f%f",&x,&y);

    calf(x1, x2, x3, y1, y2, y3, x, y, &area, &flag);

    printf("\nArea of triangle:%f\n",area);

    if(flag) printf("Point(%0.1f,%0.1f) lies inside the triangle",x,y);
    else    printf("Point(%0.1f,%0.1f) lies outside the triangle",x,y);


    return 0;
}

void calf(float x1, float x2, float x3, float y1, float y2, float y3, float x, float y, float *area, int *flag){
    float a, b, c, d, e, f;
    float A, B, C;

    a = distance(x1, y1, x2, y2);
    b = distance(x2, y2, x3, y3);
    c = distance(x3, y3, x1, y1);
    *area = calarea(a,b,c);

    d = distance(x1, y1, x, y);
    e = distance(x2, y2, x, y);
    f = distance(x3, y3, x, y);

    A = calarea(e, d, a);
    B = calarea(d, f, c);
    C = calarea(e, f, b);
    
    *flag = position(A, B, C, *area);

}

float distance(float x1, float x2, float y1, float y2){
    return (sqrt ( pow((x2 - x1),2) + pow((y2 - y1), 2)));
}

float calarea(float a, float b, float c){
    float s;
    s = (a + b + c)/2.0;

    return (s * (s-a)*(s-b)*(s-c));
}

int position(float area, float A, float B, float C){
    float res = area - (A + B +C);
    if (res < 0)
    {
        res = res * -1;
    }

    if(res == 0 || res < 0.001)
    {
        return (1);
    }
    else
    {
        return(0);
    }

}