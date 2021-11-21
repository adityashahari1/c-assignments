/*If value of an angle is input through the keyboard, write a program
to print all its Trigonometric ratios.*/

# include <stdio.h>
# include <math.h>

int main(){

    float degree, radian;
    const float PI = 3.143;
    printf("Enter an angle (degree) to print all trigonometric ratios: ");
    scanf("%f",&degree);


    radian = degree * (PI/180.0);

    printf("sin(%f) = %f\n",degree,sin(radian));
    printf("cos(%f) = %f\n",degree,cos(radian));
    printf("tan(%f) = %f\n",degree,tan(radian));
    printf("cot(%f) = %f\n",degree,1/tan(radian));
    printf("sec(%f) = %f\n",degree,1/cos(radian));
    printf("cosec(%f) = %f\n",degree,1/sin(radian));

    return 0;
}
