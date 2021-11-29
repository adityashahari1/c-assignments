/*The Body Mass Index (BMI) is defined as ratio of the weight of a
person (in kilograms) to the square of the height (in meters). Write
a program that receives weight and height, calculates the BMI, and
reports the BMI category as per the following table:
BMI Category    BMI
Starvation      < 15
Anorexic        15.1 to 17.5
Underweight     17.6 to 18.5
Ideal           18.6 to 24.9
Overweight      25 to 25.9
Obese           30 to 30.9
Morbidly Obese  >= 40*/

# include <stdio.h>

int main(){
    float weight, height;
    float bmi;

    printf("Enter your weight in kilograms:\n");
    scanf("%f",&weight);

    printf("ENter your height in meters:\n");
    scanf("%f",&height);

    bmi = weight/(height*height);

    if(bmi<15)
        printf("Starvation.\n");

    else if(bmi>=15.1 && bmi<=17.5)
        printf("Anorexic.\n");

    else if(bmi>=17.6 && bmi<=18.5)
        printf("Underweight.\n");

    else if(bmi>=18.6 && bmi<=24.9)
        printf("Ideal.\n");

    else if(bmi>=25 && bmi<=25.9)
        printf("Overweight.\n");

    else if(bmi>=30 && bmi<=30.9)
        printf("Obese.\n");

    else if(bmi>=40)
        printf("Morbidly Obese.\n");

    else
        printf("Ivalid input.\n");        

    return 0;
}







