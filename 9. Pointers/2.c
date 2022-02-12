/*Write a function that receives marks received by a student in 3
subjects and returns the average and percentage of these marks.
Call this function from main( ) and print the results in main( ).*/

# include <stdio.h>

void average(float , float , float , float , float , float*, float*, float*, float* );

int main(){
    float x, y, z, a, b;
    float  tot, avg, per;
    float max;
    printf("Enter marks of 5 subjects:\n");
    scanf("%f%f%f%f%f",&x,&y,&z,&a,&b);

    printf("What's the total marks(of 5 subjects combined)  to which the exam was conducted\n");  
    scanf("%f", &max);  

    average(x, y, z, a, b, &tot, &avg, &per,&max);

    printf("Total = %f\n",tot);
    printf("Average = %f\n",avg);
    printf("Percentage = %f\n", per);
    return 0;
}

void average(float x, float y, float z, float a, float b, float *tot, float *avg, float *per, float *max){
    
    *tot = x +y +z +a +b;

    *avg = (x +y +z +a +b)/5;

    *per = (*tot *100)/ *max;
}