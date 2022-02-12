/*If the lengths of the sides of a triangle are denoted by a, b, and c,
then area of triangle is given by
area = S(S - a)(S - b)(S - c)
where, S = ( a + b + c ) / 2. Write a function to calculate the area of
the triangle.*/

# include <stdio.h>
# include <math.h>

void aot(float, float, float, float*);

int main (){
    float a, b, c;
    float result;

    printf("Enter the sides of triangle:\n");
    scanf("%f%f%f",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b)
    {
        aot(a, b, c, &result);
        printf("Area of triangle is: %f",result);
    }
    else
    {
        printf("Enter valid triangle sides\n");
    }
    return 0;
}

void aot( float a, float b, float c, float* result){
    float s;
    s = (a+b+c)/2.0;
    *result = sqrt(s*(s-a)*(s-b)*(s-c));
}