/*If lengths of three sides of a triangle are input through the
keyboard, write a program to find the area of the triangle.*/

# include <stdio.h>
# include <math.h>

int main(){
    float a, b, c;
    float s = 0, area = 0;

    printf("Enter side 1:");
    scanf("%f",&a);

    printf("Enter side 2:");
    scanf("%f",&b);

    printf("Enter side 3:");
    scanf("%f",&c);

    s =(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle is:%f",area);

    return 0;
  
}
