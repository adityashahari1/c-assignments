/*Write a C function to evaluate the series
sin(x) = x -(x^3 /3!) + (x^5 / 5!) - (x^7 / 7!) + ..
up to 10 terms.*/

# include <stdio.h>
# include <math.h>

void calf(float, float*);
double factorial(int);

int main(){
    int x;
    float radian;
    float result = 0;
    printf("Enter value of x in degrees:\n");
    scanf("%d",&x);
    radian = x *(3.14/180.0);         // convert degree to radian

    calf(radian, &result);
    printf("Sin(%d) is %f\n", x, result);

    return 0;
}

void calf(float num, float* result){
    int sign =1;
    int count;
    int n = 1;

    for(count = 1;n<=10; count+=2)
    {
        *result = *result + sign *(pow (num, count)/factorial(count));
        n++;
        sign = sign * -1;
    }
}

double factorial(int count){
    int z;
    double sum = 1;
    for(z =1; z<= count; z++)
    {
        sum = sum* z;
    }
    return (sum);
}