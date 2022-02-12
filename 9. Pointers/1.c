/*Write a function that receives 5 integers and returns the sum,
average and standard deviation of these numbers. Call this function
from main( ) and print the results in main( ).*/

# include <stdio.h>
# include <math.h>

void func(int, int, int, int, int, float*, float*, float*);

int main(){
    int  a, b, c, d, e;
    float sum=0, avg=0, sd=0;

    printf("Enter 5 integers:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    func(a,b,c,d,e,&sum,&avg,&sd);
    printf("Sum: %f\n",sum);
    printf("Average: %f\n",avg);
    printf("Standard Deviation: %f\n",sd);

    return 0;
}

void func(int a, int b, int c, int d, int e, float* sum, float* avg, float* sd){
    *sum = a+b+c+d+e;
    *avg = *sum/5;
    *sd = sqrt(((a-*avg)*(a-*avg)+(b-*avg)*(b-*avg)+(c-*avg)*(c-*avg)+(d-*avg)*(d-*avg)+(e-*avg)*(e-*avg))/5);

}

