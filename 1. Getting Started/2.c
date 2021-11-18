/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters.*/

# include <stdio.h>

int main(){
    int distance;
    printf("Enter distance in kms: \n");
    scanf("%d", &distance);

    int meters, feet, inches, centimeters;
    meters = distance * 1000;
    feet = distance * 3280.84;
    inches = distance * 39370.1;
    centimeters = distance * 100000;

    printf("Kilometers: %d \n",distance);
    printf("Meters: %d \n",meters);
    printf("Feet: %d \n",feet);
    printf("Inches: %d \n",inches);
    printf("Centimeters: %d \n",centimeters);

    return 0;
}
